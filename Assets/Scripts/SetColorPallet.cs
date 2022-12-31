using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
public class SetColorPallet : MonoBehaviour
{
    [SerializeField]
    private Material OutputColor;
    [SerializeField]
    private Material ColorInputOne;
    [SerializeField]
    private Material ColorInputTwo;


    public MagicianAnimatorController magicianAnimatorController;
    public Instantiateparticles instantiateparticles;


    BaseJson JsonResponse = new BaseJson();

    private void Start()
    {
        ColorInputOne.SetColor("_BaseColor", Color.blue);
        ColorInputTwo.SetColor("_BaseColor", Color.red);
        OutputColor.SetColor("_BaseColor", Color.white);
        SetOutputColor();
    }
    public void SetOutputColor()
    {
        string url = "https://color-mixer-api.vercel.app/?col1="+ GetColorPallet.s_ColorInputOneValue + "&col2="+ GetColorPallet.s_ColorInputTwoValue;
#if (UNITY_EDITOR)
        Debug.Log(url);
#endif
        StartCoroutine(GenerateOutputColor(url));

    }
    IEnumerator GenerateOutputColor(string url)
    {
        magicianAnimatorController.FireBeam(true);
        yield return new WaitForSeconds(1f);
        instantiateparticles.InitParticleEffect();

        var request = new UnityWebRequest(url)
        {
            downloadHandler = new DownloadHandlerBuffer()
        };
        request.SetRequestHeader("Content-Type", "application/json");
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("APICallback.............................." + request.error);
        }
        else
        {
            Debug.Log("APICallback.............................." + request.downloadHandler.text);
        }

        JsonResponse = JsonUtility.FromJson<BaseJson>(request.downloadHandler.text);

        Debug.Log("APICallback.............................." + JsonResponse.result);

        Color newCol;

        if (ColorUtility.TryParseHtmlString(JsonResponse.result, out newCol))
        {
            OutputColor.color = newCol;
        }

        magicianAnimatorController.FireBeam(false);
    }
    [System.Serializable]
    public class BaseJson
    {
        public string result;
    }
}

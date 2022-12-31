using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class GetColor : MonoBehaviour
{
    [SerializeField]
    private Material ColorInputOne;
    [SerializeField]
    private Material ColorInputTwo;
    

    public static int s_FirstColorCode = 0;
    public static int s_SecondColorCode = 0;

    public List<GameObject> FirstColorCubes = new List<GameObject>();
    public List<GameObject> SecondColorCubes = new List<GameObject>();

    [SerializeField]
    private SetColor setColor;
    // Start is called before the first frame update
    void Start()
    {
        //var ColorInputOnevar = ColorInputOne.GetColor("_BaseColor");
        //var ColorInputTwovar = ColorInputTwo.GetColor("_BaseColor");
        //Debug.Log("............................" + ColorInputOnevar + "............................" + ColorInputTwovar);
        //StartCoroutine(ProcessRequest("https://artincontext.org/color-mixer/?colordata=rgb_ff0000-1_565628-1"));
        ColorInputOne.SetColor("_BaseColor", Color.blue);
        ColorInputTwo.SetColor("_BaseColor", Color.red);

        setColor.SetOutputColor();
    }


    public void GetFirstColorCubeCode(GameObject firstColorCube)
    {
        int i;
        for (i = 0; i < FirstColorCubes.Count; i++)
        {
            if (FirstColorCubes[i] == firstColorCube)
            {
                s_FirstColorCode = i;
                ColorInputOne.color = firstColorCube.GetComponent<Renderer>().material.color            ;
                setColor.SetOutputColor();
            }
        }
        
    }

    public void GetSecondColorCubeCode(GameObject secondColorCube)
    {
        int i;
        for (i = 0; i < SecondColorCubes.Count; i++)
        {
            if (SecondColorCubes[i] == secondColorCube)
            {
                s_SecondColorCode = i;
                ColorInputTwo.color = secondColorCube.GetComponent<Renderer>().material.color;
                setColor.SetOutputColor();
            }
        }
        
    }

    

    private IEnumerator ProcessRequest(string uri)
    {
        var request = new UnityWebRequest(uri)
        {
            downloadHandler = new DownloadHandlerBuffer()
        };
        request.SetRequestHeader("Content-Type", "application/json");
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log(request.error);
        }
        else
        {
            Debug.Log("APICallback.............................." + request.downloadHandler.text);
        }

        //JsonResponse = JsonUtility.FromJson<BaseJson>(request.downloadHandler.text);


    }// Update is called once per frame
        void Update()
    {
        
    }
}

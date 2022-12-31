using UnityEngine;
using System;
using System.Collections;
public class SetColor : MonoBehaviour
{
    [SerializeField]
    private Material OutputColor;
    public MagicianAnimatorController magicianAnimatorController;
    public Instantiateparticles instantiateparticles;
    private void Start()
    {
        OutputColor.SetColor("_BaseColor", Color.white);
    }
    public void SetOutputColor()
    {
        StartCoroutine(GenerateOutputColor()); 
        
    }
     IEnumerator GenerateOutputColor()
    {
        magicianAnimatorController.FireBeam(true);
        yield return new WaitForSeconds(1f);
        instantiateparticles.InitParticleEffect();

        if (GetColor.s_FirstColorCode == 0 || GetColor.s_SecondColorCode == 0)
        {
            Color customColor = new Color(1f, 0f, 1f, 1.0f);
            OutputColor.SetColor("_BaseColor", customColor);

        }
        if (GetColor.s_FirstColorCode == 0 || GetColor.s_SecondColorCode == 1)
        {
            Color customColor = new Color(0f, 1f, 1f, 1.0f);
            OutputColor.SetColor("_BaseColor", customColor);

        }
        if (GetColor.s_FirstColorCode == 1 || GetColor.s_SecondColorCode == 0)
        {
            Color customColor = new Color(1f, 0.5f, 0f, 1.0f);
            OutputColor.SetColor("_BaseColor", customColor);

        }
        if (GetColor.s_FirstColorCode == 1 || GetColor.s_SecondColorCode == 1)
        {
            Color customColor = new Color(0.5f, 1f, 0f, 1.0f);
            OutputColor.SetColor("_BaseColor", customColor);

        }
        magicianAnimatorController.FireBeam(false);
    }
}

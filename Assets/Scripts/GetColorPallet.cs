using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class GetColorPallet : MonoBehaviour
{
    public static string s_ColorInputOneValue = "0000ff";
    public static string s_ColorInputTwoValue = "ff0000";

    public Text FlexibleColorPickerOneText;
    public Text FlexibleColorPickerTwoText;

    public SetColorPallet SetColorPalletObj;
    
    public void GetColor()
    {
        string ColorPickerOneText = FlexibleColorPickerOneText.text;
        ColorPickerOneText = ColorPickerOneText.Substring(1);
        s_ColorInputOneValue = ColorPickerOneText;

        string ColorPickerTwoText = FlexibleColorPickerTwoText.text;
        ColorPickerTwoText = ColorPickerTwoText.Substring(1);
        s_ColorInputTwoValue = ColorPickerTwoText;
        SetColorPalletObj.SetOutputColor();

#if (UNITY_EDITOR)
        Debug.Log("s_ColorInputOneValue..........." + s_ColorInputOneValue + "s_ColorInputTwoValue..........." + s_ColorInputTwoValue);
#endif
    }
}

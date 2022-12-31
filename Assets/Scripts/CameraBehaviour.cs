using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBehaviour : MonoBehaviour
{
    public RenderTexture source;
    public RenderTexture destination;
    public Material mat;
    public Camera CameraA;
    // Start is called before the first frame update
    void Start()
    {

    }

    public void OnWillRender()
    {
        Debug.Log(" OnBecameInvisible");
    }

    //void OnRenderObject()
    //{
    //    // Render different meshes for the object depending on whether
    //    // the main camera or minimap camera is viewing.
    //    if (CameraA.name == "Camera")
    //    {
    //        Debug.Log(" OnBecameInvisible");
    //    }
    //    else
    //    {
    //        Debug.Log(" ----------------------------OnBecameInvisible");
    //    }

    //    //private void OnBecameInvisible()
    //    //{
    //    //    Debug.Log(" OnBecameInvisible");
    //    //}

    //    //private void OnBecameVisible()
    //    //{
    //    //    Debug.Log(" OnBecamevisible");
    //    //}



    //    // Update is called once per frame

    //}
}
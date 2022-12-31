using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitialilationManager : MonoBehaviour
{
    public List<GameObject> InitialGO = new List<GameObject>();
    // Start is called before the first frame update
    void Start()
    {
        DisableGO();
    }

    public void DisableGO()
    {
        foreach (var item in InitialGO)
        {
            item.SetActive(false);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

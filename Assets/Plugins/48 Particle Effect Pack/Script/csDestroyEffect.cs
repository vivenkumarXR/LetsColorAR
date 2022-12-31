using UnityEngine;
using System.Collections;

public class csDestroyEffect : MonoBehaviour {

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("ColorOutput"))
        {
            Destroy(this.gameObject);
        }
       
    }
}

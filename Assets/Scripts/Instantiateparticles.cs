using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instantiateparticles : MonoBehaviour
{
    [SerializeField]
    public GameObject ParticleGO;
    public GameObject TransformParent;

    public void InitParticleEffect()
    {
        Instantiate(ParticleGO, TransformParent.transform.position, TransformParent.transform.rotation, TransformParent.transform);
    }
}

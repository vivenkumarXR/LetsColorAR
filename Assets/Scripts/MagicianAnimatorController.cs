using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagicianAnimatorController : MonoBehaviour
{
    [SerializeField]
    private Animator _magicianAnimator;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void FireBeam(bool value)
    {
        _magicianAnimator.SetBool("mixamo_com", value);
    }
 
}

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.InputSystem;
[RequireComponent(typeof(ARRaycastManager))]
public class PlaceObjectOnPlane : MonoBehaviour
{
    [SerializeField]
    GameObject placedprefab;
    GameObject spawnedObject;
    ARRaycastManager aRRaycastManager;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    [SerializeField] bool repositionObject = false;
    ARPlaneManager aRPlaneManeger;
    // Start is called before the first frame update
    void Start()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManeger = GetComponent<ARPlaneManager>();
    }

    public void OnPlaceObject(InputValue value)
    {

        Vector2 touchPosition = value.Get<Vector2>();
        if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            Pose hitPose = hits[0].pose;
            if (spawnedObject == null)
            {

                spawnedObject = Instantiate(placedprefab, hitPose.position, hitPose.rotation);
            }
            else if (repositionObject)
            {
                spawnedObject.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
            }

        }
        if (spawnedObject != null)
        {
            foreach (var plane in aRPlaneManeger.trackables)
            {
                plane.gameObject.SetActive(false);
            }
        }



    }


}

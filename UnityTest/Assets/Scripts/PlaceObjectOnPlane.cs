using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlaceObjectOnPlane : MonoBehaviour
{
    public GameObject placementIndicator;
    private Pose placementPose;
    private Transform placementTransform;
    private bool placementPoseIsValid = false;
    private TrackableId placedPlaneID = TrackableId.invalidId;

    ARRaycastManager m_RaycastManager;
    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();


    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }

    private void Update()
    {
        UpdatePlacementPosition();
        UpdatePlacementIndicator();
    }

    private void UpdatePlacementPosition()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        if (m_RaycastManager.Raycast(screenCenter, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            placementPoseIsValid = s_Hits.Count > 0;
            if (placementPoseIsValid)
            {
                placementPose = s_Hits[0].pose;
                placedPlaneID = s_Hits[0].trackableId;

                var planeManager = GetComponent<ARPlaneManager>();
                ARPlane arPlane = planeManager.GetPlane(placedPlaneID);
                placementTransform = arPlane.transform;
            }
        }
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementTransform.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }
}

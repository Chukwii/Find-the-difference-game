using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class tabRescaler : MonoBehaviour
{
    public GameObject[] gameCanvas, ScrolViewUp;
    public GameObject[] gameCanvas2, ScrolViewDown;

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        gameCanvas = GameObject.FindGameObjectsWithTag("imagesForGame");
        gameCanvas2 = GameObject.FindGameObjectsWithTag("imagesForGameDiff");
        ScrolViewUp = GameObject.FindGameObjectsWithTag("ScrolViewUp");
        ScrolViewDown = GameObject.FindGameObjectsWithTag("ScrolViewDown");

        float screenWidth = Screen.width / Screen.dpi;
        float screenHeight = Screen.height / Screen.dpi;
        float size = Mathf.Sqrt(Mathf.Pow(screenWidth, 2) + Mathf.Pow(screenHeight, 2));
        int aspectRatio = Mathf.Max(Screen.width, Screen.height) / Mathf.Min(Screen.width, Screen.height);
        if(size >= 6.5f && aspectRatio < 2f)
        {
            foreach(GameObject t in ScrolViewUp)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 866.91f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, 172.16f, 0);
            }

            foreach (GameObject t in ScrolViewDown)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 866.91f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, -172.16f, 0);
            }

            //Debug.Log("tab");
            foreach (GameObject i in gameCanvas)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -425.41f, 0);
            }
            foreach (GameObject i in gameCanvas2)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -444f, 0);
            }
        }

        float sizeRatio = (float)Screen.height / (float)Screen.width;
        if(sizeRatio >= 2 && sizeRatio < 2.1f)
        {
            foreach (GameObject t in ScrolViewUp)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 1569.3f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, 305.49f, 0);
            }

            foreach (GameObject t in ScrolViewDown)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 1569.3f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, -305.49f, 0);
            }

            //Debug.Log("tab");
            foreach (GameObject i in gameCanvas)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 1.162f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -785f, 0);
            }
            foreach (GameObject i in gameCanvas2)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 1.162f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -785f, 0);
            }
        }else if(sizeRatio >= 2.1f)
        {
            foreach (GameObject t in ScrolViewUp)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 1744.9f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, 338.82f, 0);
            }

            foreach (GameObject t in ScrolViewDown)
            {
                t.gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(t.gameObject.GetComponent<RectTransform>().sizeDelta.x, 1744.9f);
                t.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(t.gameObject.GetComponent<RectTransform>().localPosition.x, -338.82f, 0);
            }

            //Debug.Log("tab");
            foreach (GameObject i in gameCanvas)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 1.305f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -871f, 0);
            }
            foreach (GameObject i in gameCanvas2)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 1.305f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -871f, 0);
            }
        }

        Debug.Log("width " + Screen.width);
        Debug.Log("height " + Screen.height);
        Debug.Log(sizeRatio);
        /*if (Screen.width >= 1500f)
        {
            foreach (GameObject i in gameCanvas)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -887f, 0);
            }
            foreach (GameObject i in gameCanvas2)
            {
                i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
                i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -444f, 0);
            }
        }*/
    }
}

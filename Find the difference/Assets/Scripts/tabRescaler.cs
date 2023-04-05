using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class tabRescaler : MonoBehaviour
{
    public GameObject[] gameCanvas;
    public GameObject[] gameCanvas2;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        /*float screenWidth = Screen.width / Screen.dpi;
        float screenHeight = Screen.height / Screen.dpi;
        float size = Mathf.Sqrt(Mathf.Pow(screenWidth, 2) + Mathf.Pow(screenHeight, 2));
        int aspectRatio = Mathf.Max(Screen.width, Screen.height) / Mathf.Min(Screen.width, Screen.height);
        if(size >= 6.5f && aspectRatio < 2f)
        {
            Debug.Log("tab");
        }*/

        gameCanvas = GameObject.FindGameObjectsWithTag("imagesForGame");
        gameCanvas2 = GameObject.FindGameObjectsWithTag("imagesForGameDiff");

        if (Screen.width >= 1500f)
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
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class objDrag : MonoBehaviour
{
    private Vector2 initialPos;
    private Vector2 mousePos;
    private Vector3 mOffset;

    private float deltaX, deltaY;
    public GameObject gameCanvas;
    
    // Update is called once per frame
    void Update()
    {
        //initialPos = transform.localPosition;
        //Debug.Log(Input.mousePosition.y);
        if (Input.GetMouseButtonDown(0))
        {
            deltaX = Input.mousePosition.x - transform.position.x;
            deltaY = Input.mousePosition.y - transform.position.y;
        }
        if (Input.GetMouseButton(0))
        {
            //if(gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight > 0)
            //{
                if (Input.mousePosition.y > 0.12708f * Screen.height)
                {
                    Debug.Log("working");
                    //this.transform.position = Input.mousePosition;
                    mousePos = Input.mousePosition;
                    transform.position = new Vector2(mousePos.x - deltaX, mousePos.y - deltaY);
                }
            //}
            
        }
        /*if (gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight == 0.2f)
        {
            initialPos.x = Mathf.Clamp(initialPos.x, -131f, 131f);
            initialPos.y = Mathf.Clamp(initialPos.y, -170f, 159f);
        }
        transform.localPosition = initialPos;*/
    }

    /*public void clampSett()
    {
        if (gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight == 0.2f)
        {
            initialPos.x = Mathf.Clamp(initialPos.x, -131f, 131f);
            initialPos.y = Mathf.Clamp(initialPos.y, -170f, 159f);
        }
        else
        {
            initialPos.x = Mathf.Clamp(initialPos.x, 0, 0f);
            initialPos.y = Mathf.Clamp(initialPos.y, -7.205078f, -7.205078f);
        }
    }*/

   /* private void OnMouseDown()
    {
        deltaX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x - transform.position.x;
        deltaY = Camera.main.ScreenToWorldPoint(Input.mousePosition).y - transform.position.y;
    }

    private void OnMouseDrag()
    {
        mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        transform.position = new Vector2(mousePos.x - deltaX, mousePos.y - deltaY);
    }*/
}

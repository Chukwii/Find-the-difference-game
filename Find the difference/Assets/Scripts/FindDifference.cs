using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class FindDifference : MonoBehaviour
{
    public GameObject xIcon;
    private Vector3 screenPoint;
    public GameObject[] xnun;
    public GameObject loosePanel;
    public GameObject winPanel;

    public static int chances;
    public Text chancesTxt;
    //public GameObject[] squ;
    //public GameObject icon1;
    //public GameObject icon2;
    //public GameObject padLock1;
    //public GameObject padLock2;

    //public static int stagesOpen = 0;

    public static bool isVibrate = true;
    // Update is called once per frame

    void Start()
    {
        chances = 5;

    }
    void Update()
    {

        xnun = GameObject.FindGameObjectsWithTag("x");
        chancesTxt.text = chances.ToString();
        if (Input.GetMouseButtonDown(0))
        {
            screenPoint = Input.mousePosition;
            screenPoint.z += 8f;
            transform.position = Camera.main.ScreenToWorldPoint(screenPoint);
            //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            //RaycastHit2D raycastHit;
            RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
            if (hit.collider.CompareTag("findD"))
            {
                if (chances > 0)
                {
                    StartCoroutine(spawnX());
                    Debug.Log("fail");
                    if (isVibrate == true)
                    {
                        Handheld.Vibrate();
                    }
                    chances -= 1;
                }
                else
                {
                    Debug.Log("loose Game");
                    loosePanel.SetActive(true);
                    this.gameObject.SetActive(false);
                }
            }
            if (hit.collider.CompareTag("alien"))
            {
                //stagesOpen = 1;
                Debug.Log("win");
                //padLock1.SetActive(false);
                //padLock2.SetActive(false);
                /*squ = GameObject.FindGameObjectsWithTag("alien");
                foreach (GameObject s in squ)
                {
                    s.GetComponent<SpriteRenderer>().color = Color.white;
                }*/

                //icon1.GetComponent<Image>().color = Color.white;
                //icon2.GetComponent<Image>().color = Color.white;
                //icon1.GetComponent<Button>().enabled = true;
                //icon2.GetComponent<Button>().enabled = true;

                winPanel.SetActive(true);
                this.gameObject.SetActive(false);
            }
            if (hit.collider == null)
            {
                Debug.Log(hit.collider.name);
            }


        }
    }

    IEnumerator spawnX()
    {
        //spawn x(wrong) icon
        Instantiate(xIcon, transform.position, Quaternion.identity);
        yield return new WaitForSeconds(0.5f);
        foreach (GameObject g in xnun)
        {
            Destroy(g);
        }
    }
}

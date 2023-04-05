using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class setPotsNum : MonoBehaviour
{
    public int newSpotNum;
    public GameObject[] spotsObj;
    public int curLvl;

    public GameObject[] sparkle;
    public int sparkleNum;

    //public int sparkRandNum;

    private void Start()
    {
        //sparkRandNum = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (curLvl < GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            GameObject.FindObjectOfType<btnControl>().foundSpots.text = GameObject.FindObjectOfType<btnControl>().spotsNum + "/" + GameObject.FindObjectOfType<btnControl>().spotsNum;
           
        }
        else
        {
            GameObject.FindObjectOfType<btnControl>().foundSpots.text = GameObject.FindObjectOfType<btnControl>().spotFound + "/" + GameObject.FindObjectOfType<btnControl>().spotsNum;
        }

        if (this.gameObject.activeSelf)
        {
            GameObject.FindObjectOfType<btnControl>().spotsNum = newSpotNum;
        }

        if (GameObject.FindObjectOfType<btnControl>().spotFound >= GameObject.FindObjectOfType<btnControl>().spotsNum)
        {
            /*foreach(GameObject s in spotsObj)
            {
                s.GetComponent<Button>().enabled = true;
            }*/

            if (curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
            {
                GameObject.FindObjectOfType<levelRecorder>().btnOnTurn += 1;
            }

            if (GameObject.FindObjectOfType<levelRecorder>().openLvlNum == 3)
            {
                GameObject.FindObjectOfType<levelRecorder>().btnOnTurn = 3;
            }


        }

        if (GameObject.FindObjectOfType<setPotsNum>().curLvl >= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            if (GameObject.FindObjectOfType<btnControl>().hintHit == true)
            {
                StartCoroutine(showHint());
                GameObject.FindObjectOfType<btnControl>().hintHit = false;
            }
        }

    }


    IEnumerator showHint()
    {
        if(sparkleNum <= newSpotNum)
        {
            if(sparkleNum > 0)
            {
                if (spotsObj[0].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[0].SetActive(true);
                    sparkle[sparkle.Length - sparkleNum].SetActive(true);
                }
                else if (spotsObj[1].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[1].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 1)].SetActive(true);
                }
                else if (spotsObj[2].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[2].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 2)].SetActive(true);
                }
                else if (spotsObj[3].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[3].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 3)].SetActive(true);
                }
                else if (spotsObj[4].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[4].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 4)].SetActive(true);
                }
                else if (spotsObj[5].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[5].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 5)].SetActive(true);
                }
                else if (spotsObj[6].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[6].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 6)].SetActive(true);
                }
                else if (spotsObj[7].GetComponent<disableObj>().hasClick == false)
                {
                    sparkle[4].SetActive(true);
                    sparkle[sparkle.Length - (sparkleNum - 7)].SetActive(true);
                }
                /*if (sparkRandNum == 0)
                {
                    
                    
                }
                else if(sparkRandNum == 1)
                {
                    if(spotsObj[1].GetComponent<disableObj>().hasClick == false)
                    {
                        sparkle[1].SetActive(true);
                        sparkle[sparkle.Length - (sparkleNum - 1)].SetActive(true);
                    }
                }*/
                foreach (GameObject s in sparkle)
                {
                    s.GetComponent<Animator>().enabled = true;
                }
                
            }
        }
        yield return new WaitForSeconds(2f);
        foreach (GameObject s in sparkle)
        {
            s.SetActive(false);
        }
    }
}

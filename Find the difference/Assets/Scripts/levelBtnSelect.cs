using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class levelBtnSelect : MonoBehaviour
{
    public GameObject[] img;
    public int lvlPicNum;
    public int ScrollPicNum;

    public GameObject lvlPanel;

    public void Update()
    {
        //check if level has been completed then activate next level
        if(lvlPicNum <= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            this.gameObject.GetComponent<Button>().enabled = true;
            this.gameObject.GetComponent<Image>().color = Color.white;
        }

        if(lvlPicNum == 1 || lvlPicNum == 2)
        {
            this.gameObject.GetComponent<Button>().enabled = true;
            this.gameObject.GetComponent<Image>().color = Color.white;
        }
    }

    //select level
    public void selectLevel()
    {
        
        img[ScrollPicNum].SetActive(true);
        lvlPanel.SetActive(false);
        GameObject.FindObjectOfType<setPotsNum>().sparkleNum = GameObject.FindObjectOfType<setPotsNum>().newSpotNum;
        GameObject.FindObjectOfType<BannerAd>().hide();
    }
}

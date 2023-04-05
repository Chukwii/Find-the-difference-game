using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class btnControl : MonoBehaviour
{
    public GameObject xIcon;
    public GameObject circleIcon;
    private Vector3 screenPoint;
    public GameObject loosePanel;
    public GameObject winPanel;
    public GameObject[] xnun;
    public GameObject[] circleCol;

    public int chances;

    public int hint = 3;
    public Text hintsTxt;

    public bool isVibrate = true;

    public int spotFound;
    public int spotsNum;

    public GameObject gameCanvas;
    public GameObject menuCanvas;
    public GameObject lvlPanel;

    public GameObject[] hearts;
    public int heartNum = 0;
    public bool hintHit = false;

    public GameObject settingsPanel;
    public bool settingsOn = false;

    public AudioSource bgMusic;
    public bool musicOn;

    public GameObject[] content;
    public Text foundSpots;

    public int boolNum;

    public GameObject[] lvlsSet;

    public int[] adsLevelNum;

    public GameObject lisPanel;
    public bool listOn = false;
    public bool openLvlNum = false;
    
    void Start()
    {
        Application.targetFrameRate = 60;

        chances = 5;

        boolNum = PlayerPrefs.GetInt("boolNum");
        if (boolNum == 0)
        {
            hint = 3;
            PlayerPrefs.SetInt("hint", hint);
            boolNum = 1;
            PlayerPrefs.SetInt("boolNum", boolNum);
        }
        
        hint = PlayerPrefs.GetInt("hint");
    }

    private void Update()
    {
        
        PlayerPrefs.SetInt("hint", hint);
        content = GameObject.FindGameObjectsWithTag("content");
        gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight = Mathf.Clamp(gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight, 0f, 1f);
        xnun = GameObject.FindGameObjectsWithTag("x");
        circleCol = GameObject.FindGameObjectsWithTag("circle");
        if(spotFound >= spotsNum)
        {
            Debug.Log("win");
            winPanel.SetActive(true);
            if(openLvlNum == false)
            {
                GameObject.FindObjectOfType<levelRecorder>().openLvlNum += 1;
                openLvlNum = true;
            }
            
            /*foreach(Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
            {
                child.gameObject.SetActive(false);
            }*/
        }
        
        hintsTxt.text = hint + "";
    }

    public void zoomIn()
    {
        foreach(GameObject c in content)
        {
            Vector3 cScale = c.transform.localScale;
            if(cScale.x < 2f)
            {
                cScale.x += 0.2f;
                cScale.y += 0.2f;
                cScale.z += 0.2f;
                c.transform.localScale = cScale;
            }
            
        }

    }
    public void zoomOut()
    {
        //gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight -= 0.2f;
        /*foreach (Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
        {
            child.GetComponent<RectTransform>().localPosition = new Vector3(0, -7.205017f, 0);
        }*/
        foreach (GameObject c in content)
        {
            Vector3 cScale = c.transform.localScale;
            if (cScale.x > 1f)
            {
                cScale.x -= 0.2f;
                cScale.y -= 0.2f;
                cScale.z -= 0.2f;
                c.transform.localScale = cScale;
            }

        }
    }

    public void wrongSelect()
    {
        if (chances > 0)
        {
            StartCoroutine(spawnX());
            Debug.Log("fail");
            if (isVibrate == true)
            {
                Handheld.Vibrate();
            }

            hearts[heartNum].SetActive(false);
            heartNum += 1;
            chances -= 1;
        }
        else
        {
            Debug.Log("loose Game");
            loosePanel.SetActive(true);
        }
    }

    public void settingsBtn()
    {
        if(settingsOn == false)
        {
            settingsPanel.SetActive(true);
            settingsOn = true;
        }
        else if(settingsOn == true)
        {
            settingsPanel.SetActive(false);
            settingsOn = false;
        }
    }

    public void vibrateBtn()
    {
        if(isVibrate == true)
        {
            isVibrate = false;
        }
        else if(isVibrate == false)
        {
            isVibrate = true;
        }
    }

    public void musicBtn()
    {
        if(musicOn == true)
        {
            bgMusic.Stop();
            musicOn = false;
        }
        else if(musicOn == false)
        {
            bgMusic.Play();
            musicOn = true;
        }
    }

    public void hintBtn()
    {
        if (GameObject.FindObjectOfType<setPotsNum>().curLvl >= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            if (hint > 0)
            {
                if (GameObject.FindObjectOfType<setPotsNum>().sparkleNum > 0)
                {
                    hint -= 1;
                    hintHit = true;
                }

            }
        }
            
        
    }

    IEnumerator spawnX()
    {
        //spawn x(wrong) icon
        Instantiate(xIcon, Input.mousePosition, Quaternion.identity);
        GameObject.Find("xIcon(Clone)").transform.SetParent(GameObject.Find("Canvas").transform);
        yield return new WaitForSeconds(0.5f);
        foreach (GameObject g in xnun)
        {
            Destroy(g);
        }
    }

    public void rightSelect()
    {
        Debug.Log("One spot found");
    }

    public void lvlPanelBtn()
    {
        openLvlNum = false;
        if (GameObject.FindObjectOfType<setPotsNum>().curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
            {
                s.GetComponent<Button>().enabled = true;
                s.GetComponent<disableObj>().hasClick = false;
            }
            foreach (GameObject c in circleCol)
            {
                Destroy(c);
            }
        }
        foreach (Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
        {
            child.gameObject.SetActive(false);
        }
        

        foreach(int a in adsLevelNum)
        {
            if (GameObject.FindObjectOfType<levelRecorder>().btnOnTurn == a)
            {
                GameObject.FindObjectOfType<Interstitial>().ShowAd();
            }
        }

        foreach (GameObject c in content)
        {
            c.transform.localScale = new Vector3(1f, 1f, 1f);
        }
        spotFound = 0;
        lvlPanel.SetActive(true);
        winPanel.SetActive(false);
        loosePanel.SetActive(false);
        chances = 5;
        heartNum = 0;
            
        foreach(GameObject h in hearts)
        {
            h.SetActive(true);
        }

        GameObject.FindObjectOfType<BannerAd>().Show();
    }
    
    public void restart()
    {

        openLvlNum = false;
        foreach (GameObject c in content)
        {
            c.transform.localScale = new Vector3(1f, 1f, 1f);
        }
        spotFound = 0;
        winPanel.SetActive(false);
        loosePanel.SetActive(false);
        chances = 5;
        heartNum = 0;
        if (GameObject.FindObjectOfType<setPotsNum>().curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
            {
                s.GetComponent<Button>().enabled = true;
                s.GetComponent<disableObj>().hasClick = false;
            }
            foreach (GameObject c in circleCol)
            {
                Destroy(c);
            }
        }
        foreach (GameObject h in hearts)
        {
            h.SetActive(true);
        }
        foreach (int a in adsLevelNum)
        {
            if (GameObject.FindObjectOfType<levelRecorder>().btnOnTurn == a)
            {
                GameObject.FindObjectOfType<Interstitial>().ShowAd();
            }
        }
    }

    public void listPanelShow()
    {
        if(listOn == false)
        {
            lisPanel.SetActive(true);
            listOn = true;
        }
        else
        {
            lisPanel.SetActive(false);
            listOn = false;
        }
    }

    
}

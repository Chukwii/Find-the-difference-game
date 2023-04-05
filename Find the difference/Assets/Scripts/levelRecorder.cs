using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class levelRecorder : MonoBehaviour
{
    public int btnOnTurn, openLvlNum;

    // Start is called before the first frame update
    void Start()
    {
        btnOnTurn = PlayerPrefs.GetInt("btnOnTurn");
        openLvlNum = PlayerPrefs.GetInt("openLvlNum");
    }

    // Update is called once per frame
    void Update()
    {
        PlayerPrefs.SetInt("btnOnTurn", btnOnTurn);
        PlayerPrefs.SetInt("openLvlNum", openLvlNum);
    }
}

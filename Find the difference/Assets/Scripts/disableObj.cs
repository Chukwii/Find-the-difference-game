using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class disableObj : MonoBehaviour
{
    public GameObject twinRightSel;
    public bool hasClick = false;

    private void Start()
    {
        altDisable();
    }

    public void disAble()
    {
        GameObject.FindObjectOfType<btnControl>().adPanel.SetActive(false);
        StartCoroutine(showCorrect());
        hasClick = true;
        twinRightSel.GetComponent<disableObj>().hasClick = true;
    }

    public void altDisable()
    {
        GameObject.FindObjectOfType<btnControl>().adPanel.SetActive(false);
        if (GameObject.FindObjectOfType<setPotsNum>().curLvl < GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
        {
            Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, this.transform.position, Quaternion.identity, this.gameObject.transform);
            //twinRightSel.GetComponent<Button>().enabled = false;
            this.gameObject.GetComponent<Button>().enabled = false;
        }
        else
        {
            Debug.Log("nut");
        }
    }

    IEnumerator showCorrect()
    {
        yield return new WaitForSeconds(0.1f);
        GameObject.FindObjectOfType<btnControl>().spotFound++;
        Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, this.transform.position, Quaternion.identity, this.gameObject.transform);

        Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, twinRightSel.transform.position, Quaternion.identity, twinRightSel.transform);
        twinRightSel.GetComponent<Button>().enabled = false;
        this.gameObject.GetComponent<Button>().enabled = false;
    }
}

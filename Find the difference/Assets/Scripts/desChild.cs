using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class desChild : MonoBehaviour
{
    public GameObject twin;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(actiVate());
    }

    IEnumerator actiVate()
    {
        yield return new WaitForSeconds(1f);
        twin.SetActive(true);
    }
}

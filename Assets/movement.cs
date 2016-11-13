using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Rigidbody2D rb = GetComponent<Rigidbody2D> ();


		GameObject newPart = new GameObject ();

		Destroy (newPart);
	}

	void OnCollisionEnter2D(Collision2D collision) {
	}
}

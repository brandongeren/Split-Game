using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBall : MonoBehaviour {


	public float Friction = 0.9f;
	public float Speed = 20f;
	public float minSpeed = 0.5f;


	// Update is called once per frame
	void Update () {
		transform.position = Vector3.MoveTowards(transform.position, 
			transform.position + transform.forward, Speed * Time.deltaTime / transform.localScale.x);

		print (transform.forward);
		Speed = Speed * Friction;
		if (Speed < minSpeed) {
			Speed = 0;
		}
	}
}

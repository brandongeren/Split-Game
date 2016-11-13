using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBall : MonoBehaviour {


	public float Friction = 0.8;
	public float Speed = 20;

	// Update is called once per frame
	void Update () {
		transform.position = Vector3.MoveTowards(transform.position, 
			transform.position + transform.forward, Speed * Time.deltaTime / transform.localScale.x);
		Speed = Speed * Friction;
		if (Speed < 0.5) {
			Speed = 0;
		}
	}
}

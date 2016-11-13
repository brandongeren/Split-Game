using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Ball : MonoBehaviour {

	string controlledBall = "ControlledBall";
	string otherBall = "OtherBall";
	string npcBall = "Food";
	public Rigidbody2D thisBall;
	public static int size;        // The player's score.
	Text text;                      // Reference to the Text component.


	// Use this for initialization
	void Start () {
		thisBall = GetComponent<Rigidbody2D>();

		// Set up the reference.
		text = GameObject.FindGameObjectWithTag ("size").GetComponent<Text>();

		// Reset the score.
		size = 0;

	}
	
	// Update is called once per frame
	void Update () {
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		GameObject arrow = GameObject.Find ("arrow-button");
		GameObject arrowTest = GameObject.Find ("arrowTest");
		player.transform.localRotation = arrow.transform.localRotation;
		arrowTest.transform.localRotation = arrow.transform.localRotation;
		player.transform.rotation = arrow.transform.rotation;
		arrowTest.transform.rotation = arrow.transform.rotation;

		size = (int) player.transform.localScale.magnitude;
		// Set the displayed text to be the word "Score" followed by the score value.
		string textString = "Size: " + size;
		text.text = textString;
	}

	void OnTriggerEnter2D (Collider2D coll) {
		if  	(coll.gameObject.tag == controlledBall
			||	 coll.gameObject.tag == otherBall
			||	 coll.gameObject.tag == npcBall) {
			// in this case, the ball with higher mass ( if tie, use higher velocity) should absorb the other one
			// absorb means: delete one and increase the mass / modify the momentum of the new larger ball

			combineBalls (coll.gameObject);

		}

	}

	void combineBalls (GameObject thatBall) {
		float thisMass = thisBall.transform.localScale.magnitude;
		float thatMass = thatBall.transform.localScale.magnitude;

		float scaleFactor = (thisMass + thatMass) / thisBall.transform.localScale.magnitude;


		thisBall.transform.localScale = scaleFactor * thisBall.transform.localScale;
		thisBall.velocity *= (1/scaleFactor);


		Destroy (thatBall);

	}





}

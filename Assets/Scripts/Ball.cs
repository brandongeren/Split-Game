using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	string controlledBall = "ControlledBall";
	string otherBall = "OtherBall";
	string npcBall = "NPC Ball";
	public Rigidbody2D thisBall;


	// Use this for initialization
	void Start () {
		thisBall = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D (Collider2D coll) {
		if  	(coll.gameObject.tag == controlledBall
			||	 coll.gameObject.tag == otherBall
			||	 coll.gameObject.tag == npcBall) {
			// in this case, the ball with higher mass ( if tie, use higher velocity) should absorb the other one
			// absorb means: delete one and increase the mass / modify the momentum of the new larger ball

			Rigidbody2D thatBall = coll.GetComponent<Rigidbody2D> ();


			if (thisBall.mass > thatBall.mass 
				|| (thisBall.mass == thatBall.mass && thisBall.velocity >= thatBall.velocity)) {
				combineBalls (thatBall);
			} 

		}

	}

	void combineBalls (Rigidbody thatBall) {
		float thisMass = thisBall.mass;
		float thatMass = thatBall.mass;


		float thisMomentum = thisMass * thisBall.velocity;
		float thatMomentum = thatMass * thatBall.velocity;
		float newVelocity = (thisMomentum + thatMomentum) / (thisMass + thatMass);
		thisBall.mass = thisMass + thatMass;
		thisBall.velocity = newVelocity;

		Destroy (thatBall);

	}
}
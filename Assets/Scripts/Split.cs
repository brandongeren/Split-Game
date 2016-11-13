using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Split : MonoBehaviour {

	public Rigidbody2D parent;

	void splitBy(float amount) {
		parent = GameObject.FindGameObjectWithTag ("Player").GetComponent<Rigidbody2D>();

		Rigidbody2D clone = (Rigidbody2D) Instantiate (parent, transform.position, transform.rotation);
		parent.transform.localScale *= amount;

		float parentMass = parent.transform.localScale.magnitude;
		float cloneMass = clone.transform.localScale.magnitude;

		float scaleFactor = (parentMass + cloneMass) / parent.transform.localScale.magnitude;


		clone.velocity += new Vector2(clone.transform.rotation.x, clone.transform.rotation.y);
		parent.velocity += new Vector2(parent.transform.rotation.x, parent.transform.rotation.y);
		clone.velocity *= (1 / scaleFactor);
		parent.velocity *= (1 / scaleFactor);
	}

	public void splitEight () {
		splitBy (1f / 8f);
	}

	public void splitFour () {
		splitBy (1f / 4f);
	}

}

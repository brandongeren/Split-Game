using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GoalManager : MonoBehaviour {

	public static int goal;        // The player's score.


	Text text;                      // Reference to the Text component.


	void Awake ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		// Reset the score.
		goal = 0;
	}


	void Update ()
	{
		// Set the displayed text to be the word "Score" followed by the score value.
		text.text = "Goal: " + goal;
	}
}
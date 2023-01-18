#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

namespace UI
{
	/// <summary>
	/// Writes the main prompt to cout
	/// Requirements:
	/// 2.1
	/// 2.2
	/// </summary>
	void MainPrompt();

	/// <summary>
	/// Gets the user input for the main prompt using cin
	/// 1: Default Simulation Run
	/// 2: User Input Simulation Run
	/// 3: Exit Program
	/// </summary>
	/// <returns>Selection Value</returns>
	int GetUserSelection();

	/// <summary>
	/// Gets the Starting Floor from the user using cin
	/// Requirements:
	/// 2.2.1.1
	/// </summary>
	/// <returns>Starting Floor Number</returns>
	int GetStartingFloor();

	/// <summary>
	/// Gets the list of floors to travel to from the user using cin
	/// The user input must be of the format of comma seperated integers
	/// Requirements:
	/// 2.2.1.2
	/// </summary>
	/// <returns>List of Floors to Visit</returns>
	std::vector<int> GetFloorsToVisit();
}
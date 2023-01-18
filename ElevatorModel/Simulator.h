#pragma once
#include "ElevatorContext.h"
#include <vector>
#include <string>

class Simulator
{
public:
	/// <summary>
	/// Constructor that has input parameters for elevator initialization and for an elevator simulation run
	/// </summary>
	/// <param name="StartingFloor">Elevator Starting Floor</param>
	/// <param name="floors">Floors to visit</param>
	Simulator(int StartingFloor, std::vector<int> floors) : _floors(floors) { _iElevatorContext = Elevator::ElevatorContext(StartingFloor); };

	/// <summary>
	/// Runs the Elevator simulation
	/// </summary>
	void RunSimulation();

	/// <summary>
	/// Get the results of a test run in a format defined in the requirments document
	/// Requirements:
	/// 2.2.2
	/// </summary>
	/// <returns></returns>
	std::string GetFormatedResults();
protected:

private:
	/// <summary>
	/// Class that contains the Simulated Elevator Model
	/// </summary>
	Elevator::IElevatorContext _iElevatorContext;

	/// <summary>
	/// List of floors to travel to during simulation
	/// </summary>
	std::vector<int> _floors;

	/// <summary>
	/// The formated output that is set during a test run
	/// </summary>
	std::string _outputString;
};
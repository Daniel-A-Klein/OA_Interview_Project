#pragma once

#include <iostream>
#include <string>

class Elevator {
public:
	/// <summary>
	/// Default Constructor initializes the current floor to the ground floor (indicated by a value of zero)
	/// Requirements:
	/// 1.1.1
	/// </summary>
	Elevator() : Elevator(0) {};

	/// <summary>
	/// Constructor that sets the starting from based on an input parameter
	/// Requirements:
	/// 1.1
	/// 1.1.2
	/// </summary>
	/// <param name="startingFloor"></param>
	Elevator(int startingFloor);

	/// <summary>
	/// Total Time Getter
	/// </summary>
	/// <returns>total time the elevator has traveled in seconds</returns>
	double GetTotalTime();
	/// <summary>
	/// Current Floor Getter
	/// </summary>
	/// <returns>The floor the evevator is currently at</returns>
	int GetCurrentFloor();

	/// <summary>
	/// Caused the Elevator to travel to a new floor and adds time to total travel time
	/// Requirements:
	/// 1.2
	/// 1.2.2
	/// </summary>
	/// <param name="floor">Floor to travel to</param>
	void TravelToFloor(int floor);
protected:

private:	
	/// <summary>
	/// The floor the evevator is currently at
	/// </summary>
	int _currentFloor;

	/// <summary>
	/// The amount of time it takes to travel between two adjacent floors in seconds
	/// Requirements:
	/// 1.2.3
	/// </summary>
	const double _singleFloorTravelTime = 10.0;

	/// <summary>
	/// The total time the elevator has traveled between floors
	/// </summary>
	double _totalTravelTime = 0;
};
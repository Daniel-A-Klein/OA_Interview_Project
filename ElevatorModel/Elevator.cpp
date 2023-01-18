#include "Elevator.h"

Elevator::Elevator(int startingFloor)
{
	_currentFloor = startingFloor;
	_totalTravelTime = 0;
}

double Elevator::GetTotalTime()
{
	return _totalTravelTime;
}


int Elevator::GetCurrentFloor()
{
	return _currentFloor;
}

void Elevator::TravelToFloor(int floor)
{
	int floorsToTravel = abs(_currentFloor - floor);
	_totalTravelTime += floorsToTravel * _singleFloorTravelTime;
	_currentFloor = floor;
}
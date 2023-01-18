#include "Simulator.h"

void Simulator::RunSimulation()
{
	std::stringstream ss();
	_outputString = std::to_string(_iElevatorContext.GetCurrentFloor());

	for (int floor : _floors)
	{
		_iElevatorContext.GetCurrentState()->TravelToFloor(floor);
		_outputString += "," + std::to_string(floor);
	}

	_outputString = std::to_string( (int)_iElevatorContext.GetTotalTime()) + " " + _outputString;
}

std::string Simulator::GetFormatedResults()
{
	return _outputString;
}
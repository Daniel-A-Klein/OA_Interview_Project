#include "Simulator.h"

void Simulator::RunSimulation()
{
	std::stringstream ss();
	_outputString = std::to_string(_elevator.GetCurrentFloor());

	for (int floor : _floors)
	{
		_elevator.TravelToFloor(floor);
		_outputString += "," + std::to_string(floor);
	}

	_outputString = std::to_string( (int)_elevator.GetTotalTime()) + " " + _outputString;
}

std::string Simulator::GetFormatedResults()
{
	return _outputString;
}
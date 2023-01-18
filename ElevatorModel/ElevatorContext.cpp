#include "ElevatorContext.h"

namespace Elevator
{ 
	ElevatorContext::ElevatorContext() {
		InitStates();
		_currentState = (ElevatorState*)_nonoperationalState;
	}

	ElevatorContext::ElevatorContext(int currentFloor)
	{
		SetCurrentFloor(currentFloor);
		InitStates();
		_currentState = (ElevatorState*)_operationalState;
	}

	ElevatorContext::~ElevatorContext()
	{
		if (_nonoperationalState != nullptr)
		{
			delete _nonoperationalState;
		}

		if (_operationalState != nullptr)
		{
			delete _operationalState;
		}
	}

	double ElevatorContext::GetTotalTime()
	{
		return _totalTravelTime;
	}

	int ElevatorContext::GetCurrentFloor()
	{
		return _currentFloor;
	}

	double ElevatorContext::GetSingleFloorTravelTime()
	{
		return _singleFloorTravelTime;
	}

	ElevatorState* ElevatorContext::GetCurrentState()
	{
		return _currentState;
	}

	void ElevatorContext::IncrementTotalTime(double addTime)
	{
		_totalTravelTime += addTime;
	}

	void ElevatorContext::SetCurrentFloor(int floor)
	{
		_currentFloor = floor;
	}

	void ElevatorContext::InitStates()
	{
		_operationalState = new OperationalState();
		_operationalState->SetContext(*this);
		_nonoperationalState = new NonoperationalState();
		_nonoperationalState->SetContext(*this);
	}

}
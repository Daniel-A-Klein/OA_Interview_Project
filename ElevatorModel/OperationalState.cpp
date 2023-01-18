#include "OperationalState.h"

namespace Elevator
{
	void OperationalState::TravelToFloor(int floor)
	{
		int currentFloor = _elevatorContext->GetCurrentFloor();
		_elevatorContext->SetCurrentFloor(floor);
		int floorsToTravel = abs(currentFloor - floor);
		double travelTime = floorsToTravel * _elevatorContext->GetSingleFloorTravelTime();
		_elevatorContext->IncrementTotalTime(travelTime);
	}
}
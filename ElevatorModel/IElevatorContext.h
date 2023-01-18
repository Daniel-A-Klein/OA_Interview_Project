#pragma once
#include "ElevatorState.h"

namespace Elevator
{
	class IElevatorContext
	{
	public:
		virtual double GetTotalTime();
		virtual int GetCurrentFloor();
		virtual ElevatorState* GetCurrentState();
	};
}
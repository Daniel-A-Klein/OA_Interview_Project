#pragma once
#include <iostream>

class ElevatorContext;

namespace Elevator {
	class ElevatorState
	{
	public:
		virtual void TravelToFloor(int floor) = 0;
		void SetContext(ElevatorContext& elevatorContext);
	protected:
		ElevatorState() {};
		ElevatorContext *_elevatorContext;
	private:

	};

}
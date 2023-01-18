#pragma once
//#include "ElevatorState.h"



namespace Elevator
{
	class ElevatorState;
	class OperationalState : public ElevatorState
	{
	public:
		OperationalState() : ElevatorState() {};
		void TravelToFloor(int floor) override;
	protected:

	private:

	};
}
#pragma once
//#include "ElevatorState.h"



namespace Elevator 
{
	class ElevatorState;
	class NonoperationalState : public ElevatorState
	{
	public:
		NonoperationalState() : ElevatorState() {};
		void TravelToFloor(int floor) override;
	protected:

	private:

	};

}
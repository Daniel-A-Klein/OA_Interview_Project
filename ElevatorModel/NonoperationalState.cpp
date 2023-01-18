#include "NonoperationalState.h"
namespace Elevator
{
	void NonoperationalState::TravelToFloor(int floor)
	{
		//TODO: Create better warning than just c
		std::cerr << "Elevator in nonoperational state\n";
	}
}
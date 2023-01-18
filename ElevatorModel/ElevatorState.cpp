#include "ElevatorState.h"

namespace Elevator
{
	void ElevatorState::SetContext(ElevatorContext& elevatorContext)
	{
		_elevatorContext = &elevatorContext;
	}
}
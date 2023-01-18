#pragma once
#include "IElevatorContext.h"
#include "OperationalState.h"
#include "NonoperationalState.h"

namespace Elevator {
	class ElevatorContext : IElevatorContext
	{
	public:

		ElevatorContext();

		ElevatorContext(int currentFloor);

		~ElevatorContext();

		/// <summary>
		/// Total Time Getter
		/// </summary>
		/// <returns>total time the elevator has traveled in seconds</returns>
		double GetTotalTime() override;
		/// <summary>
		/// Current Floor Getter
		/// </summary>
		/// <returns>The floor the evevator is currently at</returns>
		int GetCurrentFloor() override;

		double GetSingleFloorTravelTime();

		ElevatorState* GetCurrentState() override;

		/// <summary>
		/// Increments the 
		/// </summary>
		void IncrementTotalTime(double addTime);
		/// <summary>
		/// Current Floor Getter
		/// </summary>
		void SetCurrentFloor(int floor);
		
	protected:

	private:
		/// <summary>
		/// The floor the evevator is currently at
		/// </summary>
		int _currentFloor;

		/// <summary>
		/// The amount of time it takes to travel between two adjacent floors in seconds
		/// Requirements:
		/// 1.2.3
		/// </summary>
		const double _singleFloorTravelTime = 10.0;

		/// <summary>
		/// The total time the elevator has traveled between floors
		/// </summary>
		double _totalTravelTime = 0;

		void InitStates();

		/// States
		NonoperationalState *_nonoperationalState;
		OperationalState *_operationalState;
		ElevatorState *_currentState;
	};
}
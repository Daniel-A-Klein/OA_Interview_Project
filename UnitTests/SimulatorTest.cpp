#include "UnitTest.h"
#include "../ElevatorModel/Simulator.h"

namespace 
{
	TEST(SimulatorTest, PositiveFloorsSimulation)
	{
		std::vector<int> floorsToVisit{ 2,9,1,32 };
		Simulator simulator(12, floorsToVisit);
		simulator.RunSimulation();
		EXPECT_EQ("560 12,2,9,1,32", simulator.GetFormatedResults());
	}

	TEST(SimulatorTest, NegativeFloorsSimulation)
	{
		std::vector<int> floorsToVisit{ -2,-11,-6,-15 };
		Simulator simulator(-5, floorsToVisit);
		simulator.RunSimulation();
		EXPECT_EQ("260 -5,-2,-11,-6,-15", simulator.GetFormatedResults());
	}

	TEST(SimulatorTest, MixedFloorsSimulation)
	{
		std::vector<int> floorsToVisit{ 5,-10,1,-7 };
		Simulator simulator(0, floorsToVisit);
		simulator.RunSimulation();
		EXPECT_EQ("390 0,5,-10,1,-7", simulator.GetFormatedResults());
	}
}
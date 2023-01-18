#include "UnitTest.h"
#include "../ElevatorModel/Elevator.h"

namespace {
	
	TEST(ElevatorTest, Contructor)
	{
		Elevator defaultConstructor;
		EXPECT_EQ(0, defaultConstructor.GetCurrentFloor());
		Elevator zeroConstructor(0);
		EXPECT_EQ(0, zeroConstructor.GetCurrentFloor());
		Elevator positiveConstructorObj(3);
		EXPECT_EQ(3, positiveConstructorObj.GetCurrentFloor());
		Elevator negativeConstructorObj(-2);
		EXPECT_EQ(-2, negativeConstructorObj.GetCurrentFloor());
	}

	TEST(ElevatorTest, TravelToFloor)
	{
		Elevator defaultConstructor;
		defaultConstructor.TravelToFloor(2);
		EXPECT_EQ(2, defaultConstructor.GetCurrentFloor());
		EXPECT_EQ(20, defaultConstructor.GetTotalTime());

		defaultConstructor.TravelToFloor(-1);
		EXPECT_EQ(-1, defaultConstructor.GetCurrentFloor());
		EXPECT_EQ(50, defaultConstructor.GetTotalTime());

		defaultConstructor.TravelToFloor(0);
		EXPECT_EQ(0, defaultConstructor.GetCurrentFloor());
		EXPECT_EQ(60, defaultConstructor.GetTotalTime());
	}
}
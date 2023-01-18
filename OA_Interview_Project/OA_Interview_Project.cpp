// OA_Interview_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "UserInterface.h"
#include "../ElevatorModel/Simulator.h"

int main()
{
    UI::MainPrompt();
    int startingFloor;
    std::vector<int> floors;

    switch (UI::GetUserSelection())
    {
    case 1:
        startingFloor = 12;
        floors.push_back(2);
        floors.push_back(9);
        floors.push_back(1);
        floors.push_back(32);
        break;
    case 2:
        startingFloor = UI::GetStartingFloor();
        floors = UI::GetFloorsToVisit();
        break;
    case 3:
        return 1;
    }

    Simulator simulator(startingFloor, floors);
    simulator.RunSimulation();
    std::cout << "Results:\n" << simulator.GetFormatedResults() << "\n";

    system("pause");
    return 1;
}


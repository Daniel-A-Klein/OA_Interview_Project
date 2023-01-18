#include "UserInterface.h"


namespace UI
{
	void MainPrompt()
	{
		std::cout <<
			"##################################||##################################\n"
			"##################################||##################################\n"
			"###      Welcome to Daniels Elevator Simulator Coding Example!     ###\n"
			"###                       Author: Daniel Klein                     ###\n"
			"###                                                                ###\n"
			"### This example code runs an very simple simulation on an         ###\n"
			"### elevator. The simulation requires a starting floor and a list  ###\n"
			"### floors to travel to. The list of floor needs to be input as    ###\n"
			"### interger values seperated by commas. The output will be        ###\n"
			"### a string containg the total travel time followed by a space    ###\n"
			"### then the list of floors visited where each floor is seperated  ###\n"
			"### by a common. Below is an example:                              ###\n"
			"###                                                                ###\n"
			"### Input:                                                         ###\n"
			"###    Elevator Starting Floor: 12                                 ###\n"
			"###    Floors to Visit: 2,9,1,32                                   ###\n"
			"###                                                                ###\n"
			"### Output: \"560 12,2,9,1,32\"                                    ###\n"
			"###                                                                ###\n"
			"### This example can be run either with default input values or    ###\n"
			"### with user defined values. Enter 1 for default values, 2 for    ###\n"
			"### user defined values and 3 to quit the program.                 ###\n"
			"##################################||##################################\n"
			"##################################||##################################\n"
			"Enter Selection now: ";

	}

	int GetUserSelection()
	{	
		int selection = -1;
		while (true)
		{
			do {
				std::cin >> selection;
			} while (!std::cin.good());

			switch (selection)
			{
			case 1:
			case 2:
			case 3:
				return selection;
			default:
				std::cout <<
					"##################################||##################################\n"
					"##################################||##################################\n"
					"###                                                                ###\n"
					"### You entered an incorrect selection. Please Enter 1 for default ###\n"
					"### values, 2 for user defined values and 3 to quit the program.   ###\n"
					"###                                                                ###\n"
					"##################################||##################################\n"
					"##################################||##################################\n"
					"Enter Selection now: ";
				break;
			}
		}
	}

	int GetStartingFloor()
	{
		int selection = -1;
		std::cout <<
			"##################################||##################################\n"
			"##################################||##################################\n"
			"###                                                                ###\n"
			"### Please enter the floor which the elevator will start on. The   ###\n"
			"### format is a single integer followed by the enter key.          ###\n"
			"###                                                                ###\n"
			"##################################||##################################\n"
			"##################################||##################################\n"
			"Enter Starting Floor now: ";

		// Loops until an integer value is read
		do {
			std::cin.clear();
			std::cin >> selection;
		} while (!std::cin.good());

		return selection;
	}

	std::vector<int> GetFloorsToVisit()
	{
		std::vector<int> floors;
		std::string inputStr;
		bool completed = false;

		std::cout <<
			"##################################||##################################\n"
			"##################################||##################################\n"
			"###                                                                ###\n"
			"### Please enter a list floors that the elevator will travel to.   ###\n"
			"### This will be a list of integers seperated by comma.            ###\n"
			"### Example: 2,9,1,32                                              ###\n"
			"###                                                                ###\n"
			"##################################||##################################\n"
			"##################################||##################################\n"
			"Enter Floor List Now: ";
		
		
		do {
			floors.clear();
			std::cin.clear();
			std::cin >> inputStr;

			std::stringstream ss(inputStr);

			for (int i; ss >> i;) {
				floors.push_back(i);
				if (ss.peek() == ',')
					ss.ignore();

				if (ss.eof()) // If at the end of the stringstream set completed to true to break out of the while loop
				{
					completed = true;
				} else if (!ss.good()) // The bad bit will be flaged if it ever failed to read an int value into i
				{
					std::cout <<
						"##################################||##################################\n"
						"##################################||##################################\n"
						"###                                                                ###\n"
						"###                  Incorrect Floors List Format!                 ###\n"
						"###                                                                ###\n"
						"### Please enter a list floors that the elevator will travel to.   ###\n"
						"### This will be a list of integers seperated by comma.            ###\n"
						"### Example: 2,9,1,32                                              ###\n"
						"###                                                                ###\n"
						"##################################||##################################\n"
						"##################################||##################################\n"
						"Enter Floor List Now: ";
					continue;
				}
			}
		} while (!completed);

		return floors;
	}
}
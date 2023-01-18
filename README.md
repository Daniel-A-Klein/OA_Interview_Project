# OA_Interview_Project
Author: Daniel Klein

This is an interview coding project for Outside Analytics. This coding project is a simple elevator simulator where the user can input a starting floor and a list of floors to travel to. The output is will include the total time the elevator to the nearest second has traveled followed by a space then a list of integers of the floors visited each seperated by a comma.
# Setup

1. Install Visual Stuido 2022
   - Enable the "Desktop Development with C++" Option
   - Enable the "Desktop Development with C++"->Optional->"Test Adapter For Google Test" option is enabled
2. Clone repo from github
3. Open a Project in Visual Studio 2022 and select OA_Interview_Project.sln
4. Click on Build->Build Solution and ensure 3 succeeded builds

# Unit Testing
## Using Visual Studio
1. Open the test explorer but clicking Test->"Test Explorer"
2. Run the test clicking the green arrow button in the test explorer
3. Verify all unit test succeded

## Using Executable
1. Run UnitTests.exe
2. Verify all unit test succeded

# Running the User Interface
1. Run OA_Interview_Project.exe
2. A user prompt will display
   - Enter 1 to Run the Elevator Simulation with Default Values
   - Enter 2 to Run the Elevator Simulation with User Input Values
     1. Enter the starting floor as a single integer value
     2. Enter the floors to visit as a list of integer seperated by commas
   - Enter 3 to Exit the Program
3. Check the results

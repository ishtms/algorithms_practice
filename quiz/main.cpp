#include <iostream>
#include "constants.h"
 
// gets initial height from user and returns it
double getInitialHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}
 
// Returns height from ground after "seconds" seconds
double calculateHeight(double initialHeight, int seconds)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;
 
	return currentHeight;
}
 
// Prints height every second till ball has reached the ground
void printHeight(double height, int seconds)
{
	if (height > 0.0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height:\t" << height <<
			" meters\n";
	}
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}
 
bool calculateAndPrintHeight(double initialHeight, int seconds)
{
	double height = calculateHeight(initialHeight, seconds);
	if( height <= 0 ){
        printHeight(0, seconds);
        return false;
    }else {
        printHeight(height, seconds);
        return true;
    }
}
 
int main()
{
	const double initialHeight = getInitialHeight();
    int time = 0;
    while(calculateAndPrintHeight(initialHeight, time)){
        time++;
    }
	return 0;
}
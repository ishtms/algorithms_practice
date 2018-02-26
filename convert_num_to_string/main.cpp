#include <iostream>
// Array containing the value of numbers at units place. Using array and not trying to include any types from STL.

const std::string ARRAY_OF_VALUES[10]  = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
};

long getLongInput(void) {
    std::cout << "Please enter a number between 0 and 2 billion " << std::endl;
    long input;
    std::cin >> input;
    return static_cast<long>(input);
}

// Function to check the length of the number/ string

int lengthOfString(std::string input){
   return input.size();
}

// Function to calculate number of characters and f

int main(void){
    long input = getLongInput();
    std::string number_to_string = std::to_string(input);

    // Checking the length of the string for demo purposes
    std::cout << "The length of the string is " << lengthOfString(number_to_string) << std::endl;
    return 0;
}
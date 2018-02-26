#include <iostream>
#include <string>
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
    std::cout << "Please enter a number between 0 and 4 billion " << std::endl;
    long input;
    std::cin >> input;
    return static_cast<long>(input);
}

// Function to check the length of the number/ string

int lengthOfString(std::string input){
   return input.size();
}

// Function that is responsible for printing the real value of that number

void displayValues(std::string value, int length) {

    if(length == 1){
        std::cout << "The number is " << ARRAY_OF_VALUES[std::stoi(value)] << std::endl;
    }else if(length == 2){
        // Storing the int in the units and tens place in a variable, so it's easy to access later
        int pos_at_tens = value[0], pos_at_units = value[1];
        std::string s_pos_at_tens(1, value[0]), s_pos_at_units(1, value[1]); // Using direc initialization to convert char to string

            if(std::stoi(s_pos_at_tens) == 1)
        }

}

// Function to calculate number of characters and f

int main(void){
    long input = getLongInput();
    std::string number_to_string = std::to_string(input);

    // Initializing variable to the length of the string, in order for future checks.
    int length_of_string = lengthOfString(number_to_string);
    
    switch(length_of_string) {
        case 0: 
            std::cout << "Please enter a value, thank you!" << std::endl;
            break;
        case 1: 
            displayValues(number_to_string, 1);
            break;
        case 2: 
            displayValues(number_to_string, 2);
            break;
        case 3: 
            displayValues(number_to_string, 3);
            break;
        case 4: 
            displayValues(number_to_string, 4);
            break;
        case 5: 
            displayValues(number_to_string, 5);
            break;
        case 6: 
            displayValues(number_to_string, 6);
            break;
        case 7: 
            displayValues(number_to_string, 7);
            break;
        case 8: 
            displayValues(number_to_string, 8);
            break;
        case 9: 
            displayValues(number_to_string, 9);
            break;
        case 10: 
            displayValues(number_to_string, 10);
            break;    
        default:
            std::cout << "Something is wrong with the input, please try again." << std::endl;
            break;
    }
    return 0;
}
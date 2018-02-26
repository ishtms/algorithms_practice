#include <iostream>

long getLongInput(void) {
    std::cout << "Please enter a number between 0 and 2 billion " << std::endl;
    long input;
    std::cin >> input;
    return static_cast<long>(input);
}

// Function to calculate number of characters and f

int main(void){
    long input = getLongInput();
    std::string number_to_string = std::to_string(input);



    return 0;
}
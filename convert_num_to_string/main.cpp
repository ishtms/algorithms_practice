#include <iostream>

int getInput(void) {
    std::cout << "Please enter a number between 0 and 2 billion " << std::endl;
    long input;
    std::cin >> input;
    return static_cast<long>(input);
}

int main(void){
    long input = getInput();

   /*
    Work under progress
    */


    return 0;
}
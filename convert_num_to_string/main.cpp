/*
    1) Write a program that asks the user to enter their full name and their age.
    As output, tell the user how many years they’ve lived for each letter in their name (for simplicity, count spaces as a letter).

    Sample output:

    Enter your full name: John Doe
    Enter your age: 46
    You've lived 5.75 years for each letter in your name.
*/

#include <iostream>
#include <string>
#include <iomanip>
using Integer = int;
enum class Color
{
    COLOR_BLACK, // assigned 0
    COLOR_RED, // assigned 1
    COLOR_BLUE, // assigned 2
    COLOR_GREEN, // assigned 3
    COLOR_WHITE, // assigned 4
    COLOR_CYAN, // assigned 5
    COLOR_YELLOW, // assigned 6
    COLOR_MAGENTA // assigned 7
};

void doSomething(Color color){
    std::cout << "The color is " << static_cast<int>(color) << std::endl;
}

int main(void){
    Integer a = 20;
    std::cout << a << std::endl;
}
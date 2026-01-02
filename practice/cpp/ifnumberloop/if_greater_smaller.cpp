#include <iostream>

int main () {
    int number;
    std::cout << "Please enter a number from 0 - 20:" << std::endl;
    std::cin >> number;

    if (number > 10 && number <= 20) {
        std::cout << "Number is greater than 10" << std::endl;
    } 
    else if (number < 10 && number >= 0)
    {
        std::cout << "Number is less than 10" << std::endl;
    }
    else if (number == 10)
    {
        std::cout << "Number is exactly 10" << std::endl;
    }
    else
    {
        std::cout << "Number is not within parameters, or is not a number, try again" << std::endl;
        main();
    }
    
    return 0;
}
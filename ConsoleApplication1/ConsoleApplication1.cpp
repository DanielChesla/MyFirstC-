// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number;
    char myResponse = 'Y';
    std::cout << "My first C++ application!\n\n\n";
    std::cout << "Adding a second line!\n\n\n";
    
  do{
        std::cout << "Enter a number between 1 and 9\n";
        std::cin >> number;
        std::cout << "You entered: " << number << "\n";
        int double_number = number * 2;
        std::cout << "Your number doubled would be " << double_number << "\n";
        std::cout << "Would you like to try again?\n";
        std::cin >> myResponse;
    }  while(myResponse == 'Y');
        
        
        
        return 0;



}


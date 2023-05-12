// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <ctime>


int main()
{
    int number;
    std::string myResponse = "Y";
    std::cout << "My first C++ application!\n\n\n";
    std::cout << "Adding a second line!\n\n\n";

    std::time_t now = std::time(nullptr);
    char timeString[26];
    struct tm localTime;
    localtime_s(&localTime, &now);
    std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", &localTime);
    std::cout << "The current time is: \n" << timeString << "\n\n" ;
    
  do{
        std::cout << "Enter a number between 1 and 9\n";
        std::cin >> number;
        std::cout << "You entered: " << number << "\n";
        int double_number = number * 2;
        std::cout << "Your number doubled would be " << double_number << "\n";
        std::cout << "Would you like to try again? (Enter 'Yes' or 'No')\n";
        std::cin >> myResponse;
  } while (myResponse == "Y" || myResponse == "y" || myResponse == "Yes" || myResponse == "yes" || myResponse == "YES");
        
        
        
        return 0;



}


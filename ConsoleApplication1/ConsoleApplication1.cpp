/*
Written by Daniel Chesla
Messing around with C++ for the first time
5/12/2023
*/



#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <random>
#include <cstdlib> 


class Person {
public:
    std::string name;
    int age;
    std::string hair;
    std::string eyes;
};

int main()
{
    int number;
    std::string myResponse = "Y";
    std::cout << "My first C++ application! \n";
    int choice;
    Person p;
    std::time_t now;
    int random_number;
    int double_number;
    int limit;
    do {
    
     std::cout << "What would you like to do? \n 1. Introduction \n 2. Current Time \n 3. Doubler \n 4. Random Numbers \n";
     std::cin >> choice;
     std::cin.ignore(); // ignore the newline character left in the input stream after reading choice

     switch (choice) {

     case 1:
         std::cout << "Enter name: ";
         std::getline(std::cin, p.name);
         std::cout << "Enter your age: ";
         while (!(std::cin >> p.age)) {
             std::cout << "Invalid input. Please enter a number for your age: ";
             std::cin.clear(); // Clear the error state
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the remaining input in the input buffer.
         }

         std::cout << "Enter your hair color: ";
         std::cin.ignore(); // ignore the newline character left in the input stream after reading p.age
         std::getline(std::cin, p.hair);

         std::cout << "Enter your eye color: ";
         std::getline(std::cin, p.eyes);

         std::cout << "Hello " << p.name << " \n";
         std::cout << "Wow, you are " << p.age << " years old! \n";
         std::cout << "I always liked the combination of " << p.hair << " hair and " << p.eyes << " eyes \n\n";
         break;

     case 2:


         now = std::time(nullptr);
         char timeString[26];
         struct tm localTime;
         localtime_s(&localTime, &now);
         std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", &localTime);
         std::cout << "The current time is: " << timeString << "\n\n";
         break;


      
     case 3:
         std::cout << "Enter a number between 1 and 9\n";
         while (!(std::cin >> number)) {
             std::cout << "Invalid input. Please enter a valid number: ";
             std::cin.clear(); // Clear the error state
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the remaining input in the input buffer.
         }
         std::cout << "You entered: " << number << "\n";
         double_number = number * 2;
         std::cout << "Your number doubled would be " << double_number << "\n";
         break; 

     case 4:
         std::cout << "Enter your upper limit: ";
         std::cin >> limit;
         // Initialize the random number generator
         std::srand(std::time(nullptr)); // Seed with the current time

         // Generate a random integer between 1 and 10
         random_number = std::rand() % limit ; // uses the limit that was entered to set the range

         // Print the random number
         std::cout << "The random number is: " << random_number << "\n";
         break;


     }

     std::cout << "Would you like to try again? (Enter 'Yes' or 'No')\n";
     std::cin >> myResponse;

    
        
        
        
   

  } while (myResponse == "Y" || myResponse == "y" || myResponse == "Yes" || myResponse == "yes" || myResponse == "YES");

  return 0;

}


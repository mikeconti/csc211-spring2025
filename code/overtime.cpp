#include <iostream>

// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and the special rate of $50 for the remaining hours
// prints the calculated payment

int main(){

    int hoursWorked;

    std::cout << "how many hours did you work? "  << std::endl;

    std::cin >> hoursWorked;

    if(hoursWorked <= 40){
        std::cout << "your pay is " << hoursWorked * 35 << std::endl;
    }
    else{

    std::cout << "your pay is " << (40 * 35) + ((hoursWorked - 40) * 50);
        
    }

    return 0;
}
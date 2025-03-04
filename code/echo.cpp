#include <iostream>


// echo 3 4 0 3 3 6 6 1 5 5 4 | ./temp

int main(){
    
    int input;

    while(std::cin >> input){
        std::cout << "The output is " << input << std::endl;
    }

    return 0;
}
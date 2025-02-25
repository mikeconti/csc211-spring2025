#include <iostream>
#include <cmath>


// N = 7
bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

// n = 7
int highest_prime(int n){
    for(int i = n; i > 0; i--){
        if(isPrime(i)){
            return i;
        }
    }

    return -1;

}

int main(){

    std::cout << highest_prime(11);

    return 0;
}
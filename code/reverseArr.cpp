#include <iostream>

//Write a function that reverses the contents of an array (not printed out backwards, but flips the array)

void printArr(int someArr[], int arrLength){

    for(int i = 0; i < arrLength; i++){
        std::cout << someArr[i] << " ";
    }

    std::cout << std::endl;
}

void reverseArray(int someArr[], int arrLength){

    int temp;
    int tail = arrLength - 1;

    for(int i = 0; i < arrLength/2; i++){
        temp = someArr[i];
        someArr[i] = someArr[tail - i];
        someArr[tail - i] = temp;
    }

}

int main(){

    int myArr[] = {1, 2, 3, 4, 5};

    printArr(myArr, 5);
    reverseArray(myArr, 5);
    printArr(myArr, 5);


    return 0;
}
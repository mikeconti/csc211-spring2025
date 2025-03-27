#include <iostream>

// Write a void function that adds two (NxN) 2D matrices together where 1 <  N <= 10 to std::cout.

void printMatrix(int M[][10], int row, int col){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void sumMatrix(int m1[][10], int m2[][10], int m3[][10], int n){

    for(int i =0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            m3[i][j] = m1[i][j] + m2[i][j];

        }

    }

}

int main(){
    int n = 3;

    int m1[10][10] = {{1, 2,3}, {4,5,6}, {7,8,9}};

    int m2[10][10] = {{1, 2,3}, {1, 2,3}, {1, 2,3}};
    
    int m3[10][10];

    printMatrix(m1, n, n);

    std::cout << std::endl;
    
    printMatrix(m2, n, n);

    sumMatrix(m1, m2, m3, n);
    std::cout << std::endl;

    printMatrix(m3, n, n);
}
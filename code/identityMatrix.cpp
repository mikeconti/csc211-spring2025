#include <iostream>

void printMatrix(int M[][3], int row, int col){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main(){

    int M[3][3];

    int n = 3;


for(int i = 0; i < n; i++){
    for( int j = 0; j < n; j++){

        if(i == j){
            M[i][j] = 1;
        }
        else{
            M[i][j] = 0;
        }
    }
}


    printMatrix(M, 3,3);

    return 0;
}
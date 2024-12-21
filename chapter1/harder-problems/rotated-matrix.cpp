#include <iostream>
#include <random>

using namespace std;
void print_matrix(int** matrix, int n){
        //print the matrix
    for(int row = 0; row < n; row ++){
        for(int col = 0; col < n; col++){
            cout << matrix[row][col] << ' ';
        }
            cout << '\n';
    }
}

//using 1 instead of 0
int** zeroMatrix(int** matrix, int n){
    int** new_matrix = new int*[n];

    for (int i = 0; i < n; i++){
        new_matrix[i] = new int[n];
    }
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            if (matrix[row][col] == 0){
                new_matrix[row][col] = 0;
            }else{
                new_matrix[row][col] = matrix[row][col];
            }
        }
    }
    return new_matrix;
}

//    arr[row][colum] = 9;
int** rotateMatrix(int** matrix, int n){
    int** new_matrix = new int*[n];

    for (int i = 0; i < n; i++){
        new_matrix[i] = new int[n];
    }
    //change the rotation direction with the loop directions
    for (int x = 0; x < n; x++){
        for (int y= 0; y < n; y++){
            new_matrix[x][y] = matrix[y][x];
        }
    }
    return new_matrix;
}

int main(){
    int n = 3;

    int** arr = new int*[n];

    //create the matrix
    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    int count = 1;
    //add values to the matrix
    for(int row = 0; row < n; row ++){
        for(int col = 0; col < n; col++){
            arr[row][col] = count++;
        }
        
    }



   print_matrix(arr,n);
   cout << "********************************" << endl;
   print_matrix(rotateMatrix(arr,n),n);
   cout << "********************************" << endl;
  // print_matrix(zeroMatrix(arr,n),n);
    
}
/*
[

input:
1 2 3
4 5 6
7 8 9

output:
1 4 7 
2 5 8
3 6 9







]



*/
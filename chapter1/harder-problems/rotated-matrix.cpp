#include <iostream>
#include <random>

using namespace std;
void print_matrix(int** matrix, int n){
        //print the matrix
    for(int row = 0; row < n; row ++){
        for(int col = 0; col < n; col++){
            cout << matrix[row][col];
        }
            cout << '\n';
    }
}

//    arr[row][colum] = 9;
int** rotateMatrix(int** matrix, int n){
    int** new_matrix = new int*[n];

    for (int i = 0; i < n; i++){
        new_matrix[i] = new int[n];
    }

    for (int x = 0; x < n; x++){
        for (int y= 0; y < n; y++){
            new_matrix[x][y] = matrix[y][x];
        }
    }
    return new_matrix;
}

int main(){
    int n = 5;

       
    random_device rd;                // Seed generator
    mt19937 gen(rd());               // Mersenne Twister engine
    uniform_int_distribution<> dis(0, 9);

    int** arr = new int*[n];

    //create the matrix
    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    //add values to the matrix
    for(int row = 0; row < n; row ++){
        for(int col = 0; col < n; col++){
            arr[row][col] = dis(gen);
        }
    }



   print_matrix(arr,n);
   cout << "********************************" << endl;
   print_matrix(rotateMatrix(arr,n),n);


    
}
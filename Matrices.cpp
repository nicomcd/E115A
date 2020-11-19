/*==================================================================

Nicole McDermott E - 115 LG
I pledge my honor that I have abided by the Stevens Honor System
 
[Program-2] Write a program that creates two 2x2 matrices, A and B, and then adds them together to create a third matrix, C. 
Create these matrices using 2x2 integer arrays and prompt the user to input values to populate A and B matrix. 
Then, compute and print back the summation matrix, C. 

==================================================================*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    //Initializes 3 Matrices :)
    int A[2][2]; 
    int B[2][2];
    int C[2][2];
    
    //Two for loops to iterate between the rows and col to input value matrix A
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Matrix: A\nGive me a new element for row: " << i << ", and col: " << j << endl;
            cin >> A[i][j];
        }
    }
    //Two for loops to iterate between the rows and col to input value matrix B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Matrix: B\nGive me a new element for row: " << i << ", and col: " << j << endl;
            cin >> B[i][j];
        }
    }
    
    //Iterate between all the matrices to add the corresponding variables together for Matrice C
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Print matrix C 
    for (int i = 0; i < 2; i++) {
        cout << "\n" << endl;
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
    }
    // :)
    return 0;
}

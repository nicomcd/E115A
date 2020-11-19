/*==================================================================

Nicole McDermott E - 115 LG
I pledge my honor that I have abided by the Stevens Honor System
 
 Your program asks the user to enter a number. 
 It then checks to see if that number is more than 0. If so, it proceeds to use a for-loop to calculate the factorial.
 Finally, it prints back the factorial on screen or prints "failure" (if the input number is less than 0)
 
==================================================================*/

#include<iostream>
using namespace std;

int main() {
  
    int num;
    int factorial = 1;

    cout << " Please input an integer greater than 0!~\n Listen I'm asking nicely :)" << endl;
    cin >> num;

    if (num <= 0) {
        cout << "failure!~ >:(" << endl;

    } else {

        for (int i = -num; i < 0; i++) {
            factorial = factorial * num;
            num--;
        }

        cout << "\nThis is it's factorial!~ " << factorial << endl;
    }
    
    return 0;
}


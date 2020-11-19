/*=================================================================
Nicole McDermott E - 115 LG 
I pledge my honor that I have abided by the Stevens Honor System

[Program-1] Write a program that accepts exactly ten (10) integer numbers from the user.
When the user is done inputting these numbers, the program prints back: 
(i) the sum of the 10 numbers, (ii) the minimum value from the 10 numbers, and (iii) the maximum value from the 10 numbers.

==================================================================*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
 /*Intialize 4 variables, one for the user input (x), the sum is set to 0 because there is no value yet
 * to find the maximum integer it is set to the minimum so that whatever is more than it will override it
 * to find the minimum integer it is set to the maximum so that whatever is less than it will override it
 */
    int x;
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    //For loop stops after 10 loops, using i to iterate :)
    for (int i = 0; i < 10; i++) {
        //gets user input for x each iteration
        cout << "Please input an integer!~" << endl;
        cin >> x;
        sum += x;

        //If x is greater than max, set max to x
        if (x > max) {
            max = x;
        } 
        //If x is less than min, set min to x
        if (x < min) {
            min = x;
        }
    }

    cout << "The sum of the 10 integers you gave is: " << sum << endl;
    cout << "The smallest integer you gave was: " << min << endl;
    cout << "The largest integer you gave was: " << max << endl;
    cout << "Honestly you're smart so you could've done this in your head... (._.)" << endl;
    return 0;
}


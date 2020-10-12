/*=================================================================
Nicole McDermott E - 115 LG Lab 4.1
I pledge my honor that I have abided by the Stevens Honor System

[Program-2] Write a program that accepts an indefinite set of numbers until the user enters “-1”. 
In other words, the program keeps accepting new values until the user provides a “-1” (your program accepts all values, and discards the “-1”). 
When done, the program prints back to the user: 
(i) the sum of all numbers entered (except -1), (ii) the minimum value seen across all numbers (except -1), and (iii) the maximum value across all numbers (except -1).

==================================================================*/
#include<iostream>
#include<cmath>

using namespace std;

int main() {
/*Intialize 5 variables, one boolean in order to run the while loop (asking), one for user input (X)
* the sum is set to 0 because there is no value yet
* to find the maximum integer it is set to the minimum so that whatever is more than it will override it
* to find the minimum integer it is set to the maximum so that whatever is less than it will override it 
*/
    bool asking = true;
    int x;
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    //while loop will stop is asking becomes false, it becomes false when x = -1
    while (asking) {
        //asks for user input each loop
        cout << "Please input an integer, to stop the loop input -1!" << endl;
        cin >> x;
        //stops the code if x = -1 first
        if (x == -1) {
            asking == false;
            break;
        } else {
            //otherwise add to the sum and check is x is more than max or less than min
            sum += x;
            if (x > max) {
                max = x;
            }
            if (x < min) {
                min = x;
            }
        }
    }

    cout << "The sum of the integers you gave: " << sum << endl;
    cout << "The smaller integer you gave is: " << min << endl;
    cout << "The largest integer you gave is: " << max << endl;
    cout << "\nHonestly, this is pretty cool, I hope your day is going nicely!!!~" << endl;

    return 0;
}

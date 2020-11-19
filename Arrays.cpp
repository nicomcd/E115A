/*==================================================================

Nicole McDermott E - 115 LG
 I pledge my honor that I have abided by the Stevens Honor System
 
 [Program-1] Write a program that accepts exactly ten (10) integer numbers from the user and stores them in an array. 
In a separate for-loop, the program then goes through the elements in the array to print back: 
(i) the sum of the 10 numbers, 
(ii) the minimum value from the 10 numbers, 
(iii) the maximum value from the 10 numbers.

==================================================================*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int numbers[10];
  
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    //User inputting a value one by one for each index
    for (int i = 0; i < 10; i++) {
        cout << "Give me an integer!~" << endl;
        cin >> numbers[i];
        
        //Get the sum of the integers
        sum += numbers[i];
        
        //If number is more than the max, sets it as the max
        if (numbers[i] > max) {
            max = numbers[i];
        }
        
        //If number is less than the min, sets it as the min
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
   
    cout << "The sum of the 10 integers: " << sum << endl;
    cout << "The minimum integer of the 10 integers: " << min << endl;
    cout << "The maximum integer of the 10 integers " << max << endl;
    cout << "\nI hope you're having a nice day :)" << endl;

    return 0;
}

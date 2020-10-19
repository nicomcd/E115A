/*Nicole McDermott E - 115 LG I pledge my honor that I have abided by the Stevens Honor System
*[Program-1] Write a program that accepts exactly ten (10) integer numbers from the user and stores them in an array. 
*In a separate for-loop, the program then goes through the elements in the array to print back: 
*(i) the sum of the 10 numbers, 
*(ii) the minimum value from the 10 numbers, 
*and (iii) the maximum value from the 10 numbers.
* 
*/
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int numbers[10];
  
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 10; i++) {
        cout << "Gimme integer~" << endl;
        cin >> numbers[i];
        sum += numbers[i];
        if (numbers[i] > max) {
            max = numbers[i];
        }
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

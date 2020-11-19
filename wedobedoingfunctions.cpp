/*==================================================================

Nicole McDermott E - 115 LG
 I pledge my honor that I have abided by the Stevens Honor System
 
1. A function that prints a simple text message on screen, such as "Hope you're having a good day". 
Signature for this function is: void printGreeting()

2. A function that accepts two floating point values as input (x and y), and prints the result of x/y. If the denominator (y) is zero,
the function prints "Cannot perform division". 
Signature for this function: float divideNumbers(float x, float y)

3. A function that accepts a positive integer as input (N), and prints the first N terms of the Fibonacci series. For example, 
for an input of N = 10, the function prints "0, 1, 1, 2, 3, 5, 8, 13, 21, 34".
Signature for this function: void fibonacci(int N)

[Final Step]: Once you have coded down these functions outside your main,
go ahead and call these functions with meaningful parameters as input from within main(). 
If the function returns a value, capture and print that response in main.
 
==================================================================*/

#include<iostream>
#include<string>
using namespace std;

//Greetings
void printGreeting() {
    cout << "\nHope you're having a good day!~ :)" << endl;
}

//Dividing Floats
float divideNumbers(float x, float y) {
    //To avoid issues with undefined division
    if (y == 0) {
        cout << "\nCannot perform division! >:(" << endl;
        return 0;
    }
    else {
        float num = x / y;
        cout << "It's " << num << endl;
        return num;
    }
}

//Fibonacci done the difficult way
void fibonacci(int N) {
    N = abs(N);
    string fibo = "0, 1, 1";
    int var1 = 1;
    int var11 = 1;
    int var2 = 1;
    if (N == 0) {
        cout << "Mans really entered 0..." << endl;
    } else if (N == 1) {
        cout << "0\nThat was boring!" << endl;
    } else if (N == 2) {
        cout << "0, 1" << endl;
    } else {
        for (int i = 0; i < (N - 3); i++) {
            var2 = var11 + var1;
            var11 = var1;
            var1 = var2;
            string stringvar2 = to_string(var2);
            fibo = fibo + ", " + stringvar2;
        }
        cout << fibo << endl;
    }
}

//Initializing Things
float x, y;
int N;

int main() {

    printGreeting(); //Calls greeting function

    cout << "\nHey, give me two floats to divide, okay?" << endl;
    cin >> x;
    cin >> y;
    divideNumbers(x, y); //Inputs user numbers into my beautiful division function

    cout << "\nGive me the number of values you want from the fibonacci sequence!" << endl;
    cin >> N; 
    fibonacci(N);

    return 0;
}

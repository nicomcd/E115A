
/*Nicole McDermott E - 115 LG I pledge my honor that I have abided by the Stevens Honor System
1. A function that prints a simple text message on screen, 
such as "Hope you're having a good day". 
The signature for this function is: void printGreeting()

2. A function that accepts two floating point values as input (x and y), 
and prints the result of x/y. If the denominator (y) is zero,
the function prints "Cannot perform division". Signature for this function: 
float divideNumbers(float x, float y)

3. A function that accepts a positive integer as input (N),
and prints the first N terms of the Fibonacci series. For example, 
for an input of N = 10, the function prints "0, 1, 1, 2, 3, 5, 8, 13, 21, 34".
Signature for this function: void fibonacci(int N)

[Final Step]: Once you have coded down these functions outside your main,
go ahead and call these functions with meaningful parameters as input from within main(). 
If the function returns a value, capture and print that response in main.
*
*/
#include<iostream>
#include<string>

using namespace std;

//function for greating
void printGreeting() {
    cout << "\nHope you're having a good day!~ :)" << endl;
}

//function for dividing floats
float divideNumbers(float x, float y) {
    //if statement to prevent big problems with y being 0
    if (y == 0) {
        cout << "\nCannot perform division! >:(" << endl;
        return 0;
    }
    else {
        float numba = x / y;
        cout << "It's " << numba << endl;
        return numba;
    }
}

//function for fibonacci, NOT GONNA LIE, I don't know how else to do this, forgive me
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

//initializing stuffs
float x, y;
int N;

int main() {

    printGreeting(); //calls my greeting function

    cout << "\nHey so like give me two integers to divide ok" << endl;
    cin >> x;
    cin >> y;
    divideNumbers(x, y); //inputs user numbers into my beautiful division function

    cout << "\nWe gon  be doing some fibonacci stuffs, gimme integer!~" << endl;
    cin >> N; 
    fibonacci(N);

    return 0;
}
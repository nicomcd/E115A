/*==================================================================

Nicole McDermott E - 115 LG
 I pledge my honor that I have abided by the Stevens Honor System
 
==================================================================*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
 
//i:  Prompts the user to enter two integer values, and is able to perform basic math (+, -, *, /) on them.
    cout << "Part i: Basic math with integers!~" << endl;
 
    int x; // Initialize two integer variables x and y
    int y;
 
    cout << "Enter the first integer!~" << endl;
    cin >> x; //Gets user input for x
    cout << "Enter the second integer!~" << endl;
    cin >> y; //Gets user input for y
    cout << "Addition: " << x + y << en.dl; //Adds the integers
    cout << "Subtraction: " << x - y << endl; //Subtracts the integers
    cout << "Division: " << x / y << endl; //Divides the integers
    cout << "Multiplication: " << x * y << endl; //Multiplies the integers
    cout << "\nIf Division: 0, then the second value was larger than the first value..." << endl;
 
//i:  prompts the user to enter two floating point values, and is able to perform basic math on them
    cout << "\nPart ii: Basic math with floats!~" << endl;
 
    float a; //Initialize two float variables x and y
    float b;
    cout << "Enter the first float!~" << endl;
    cin >> a; //Gets user input for x
    cout << "Enter the second float!~~" << endl;
    cin >> b; //Gets user input for y
    cout << "Addition: " << a + b << endl; //Adds the floats
    cout << "Subtraction: " << a - b << endl; //Subtracts the floats
    cout << "Division: " << a / b << endl; //Divides the floats
    cout << "Multiplication: " << a * b << endl; //Multiplies the floats
    
//i: Prompts the user to enter two ‘string’ values and is able to concatenate these two strings and print back the result.
    cout << "\nPart iii: concatenate strings!~" << endl;
 
    string name; //Intializes two string variables
    string address; 
    cout << "Enter your first name please!" << endl; 
    cin >> name; //Gets user input for name string
    cout << "What town are you from?" << endl;
    cin >> address; //Gets user input for address string
    cout << "\nSo you're " << name << " and you're from " << addy << ", right?" << endl;
    //Above concatenates them to make a sentence

    return 0;
}

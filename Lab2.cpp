//Nicole McDermott E - 115 LG
//I pledge my honor that I have abided by the Stevens Honor System
#include<iostream>
#include<cmath>

using namespace std;

int main(){
/**i:  prompts the user to enter two integer values,
 and is able to perform basic math (+, -, *, /) on them,
 **/
    cout << "Part i: basic math with integers!~" << endl;
    int x; // initialize two integer varibles x and y
    int y;
    cout << "Enter the first integer!~" << endl;
    cin >> x; //gets user input for x
    cout << "Enter the second integer >:)" << endl;
    cin >> y; //gets user input for y
    cout << "Addition: " << x + y << endl; //adds the integers
    cout << "Subtraction: " << x - y << endl; // subtracts the integers
    cout << "Division: " << x / y << endl; //divides the integers
    cout << "Multiplication: " << x * y << endl; //multiplies the integers
    cout << "\nIf division is 0, then the second value was larger than the first value..." << endl;
/**i:  prompts the user to enter two floating point values, 
and is able to perform basic math on them
**/
    cout << "\nPart ii: basic math with floats!~" << endl;
    float a; // initialize two integer varibles x and y
    float b;
    cout << "Enter the first float!~" << endl;
    cin >> a; //gets user input for x
    cout << "Enter the second float~~" << endl;
    cin >> b; //gets user input for y
    cout << "Addition: " << a + b << endl; //adds the floats
    cout << "Subtraction: " << a - b << endl; // subtracts the floats
    cout << "Division: " << a / b << endl; //divides the floats
    cout << "Multiplication: " << a * b << endl; //multiplies the floats
    
/**i:   prompts the user to enter two ‘string’ values (e.g., name and address) and 
is able to concatenate these two strings and print back the result.
**/
    cout << "\nPart iii: concatenate strings!~" << endl;
    string name; //intializes two string variables
    string addy; 
    cout << "Enter your first name please!" << endl; 
    cin >> name; //gets user input for name string
    cout << "What town are you from?" << endl;
    cin >> addy; //gets user input for address string, shortened to addy because of slang
    cout << "\nSo you're " << name << " and you're from " << addy << ", right?" << endl;
    //Above concatenates them, but with other strings to make an actual sentence. 

    return 0;
}

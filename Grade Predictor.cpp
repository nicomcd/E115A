/*=================================================================
Nicole McDermott E - 115 LG 
I pledge my honor that I have abided by the Stevens Honor System
Create a grade predictor program for a hypothetical course that comprises the following elements: (i) six homework scores, (ii) two midterm scores,
and (iii) one final. The following weightage is used to arrive at the final cumulative score: 40% from homeworks, 40% from midterms and 20% from the final.
A final letter grade is arrived at based on the following score range: (i) ‘A’ for scores 91--100, (ii) ‘B’ for 81--90, (ii) ‘C’ for 71--80 and D otherwise.

Hope your day is going well! 

My Notes
-----6 cout and cin for homework scores, 0.4 a b c d e f
-----2 cout cin for midterm 0.4, m n
-----1 cout cin for final 0.2, z
-----one if for 91-100 and one else if for 81-90 and one else if for 71-80 for C and else for anything less
==================================================================*/
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float a, b, c, d, e, f, m, n, z, grade; //Initializing the variables for the grades, 6 for homework, 2 for midterms, 1 for final, 1 for total grade
    cout << "Let's calculate your hopefully good grade!~\nWhat is your first homework score?" << endl;
    cin >> a;
    cout << "What is your second homework score?" << endl; //For each we just assign the variable to user input 
    cin >> b;
    cout << "What is your third homework score?" << endl;
    cin >> c;
    cout << "What is your fourth homework score?" << endl;
    cin >> d;
    cout << "What is your fifth homework score?" << endl;
    cin >> e; 
    cout << "What is your sixth homework score?" << endl;
    cin >> f;
    cout << "What is your first midterm score?" << endl;
    cin >> m;
    cout << "What is your second midterm score?" << endl;
    cin >> n;
    cout << "What is your final score?" << endl;
    cin >> z;

    //calculates the average of each type of score, multiplies it by the weight, and adds it together!
    grade = (((a + b + c + d + e + f) / 6)*0.4) + (((m + n) / 2)*0.4) + ((z)*0.2);
  
    cout << "Your final grade is an A if the average is 100-91,\na B for 90-81, a C for 80-71, or a D for less...\nAt least you can't take an L....\n\n" << endl;
        if (grade > 100) {
            cout << "Your grade is an A! Treat your self~ :)" << endl;
        }
        else if (grade < 91 && grade > 81) {
            cout << "Your grade is a B! Not bad!" << endl; 
        }
        else if (grade < 80 && grade > 71) {
            cout << "Your grade is a C, oof." << endl;
        }
        else {
            cout << "Your grade is a D :/\nbut here, take an L" << endl;
        }
 
    return 0;
}

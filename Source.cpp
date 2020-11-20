/*==================================================================

Nicole McDermott E - 115 LG
 I pledge my honor that I have abided by the Stevens Honor System

Your next assignment is to simulate the actions of a realistic online Bank (let’s call this “OneClickBank”).

Check+ or more: Use password protection to perform all transactions. Your code must ask for a passcode before it allows the user to perform any of these functions.
When a user enters the password, your terminal should either print ‘stars’ (*) or print nothing at all (i.e., one can’t see the actual letters being typed on screen).
The initial password can be hard-coded into your program, beyond which the user is free to change the passcode anytime as long as they can input the current passcode.
(Hint: You’ll need to save these passcodes on a file for persistent storage).

==================================================================*/

#include<iostream>
using namespace std;

class OneClickBank {

private:

	//Initialize User Balance
	float currentBalance;

public:

	OneClickBank() {
		//Initial Value of Balance
		currentBalance = 1000.0;
	}



	//Checking Balance!~
	void checkBalance() {
		cout << "\nYour current balance is $" << currentBalance << "!" << endl;
	}



	//Making Deposit!~
	void makeDeposit(int choice, float amount) {
		
		//Depositing Cash! $$$
		if (choice == 1 && amount <= 100 && amount > 0) {
			//Valid, adds the amount to the balance
			currentBalance += amount; 
			cout << "\nYou deposited $" << amount << endl;
			cout << "Your new balance is $" << currentBalance << "!" << endl;
		}
		else if (choice == 1 && amount > 100) {
			//Invalid, cash deposit must be less than $100
			cout << "\nCash deposits must be less than $100!\nWe apologize for the inconvenience..." << endl;
		}

		else if (choice == 1 && amount <= 0) {
			//Invalid, cash deposit must be more than $0
			cout << "\nCash deposits must be more than $0\nWe apologize for the inconvenience..." << endl;
		}

		//Depositing Cheque! $$$
		else if (choice == 2 && amount > 0) {
			//Valid, adds the amount to the balance
			currentBalance += amount;
			cout << "\nYou deposited $" << amount << endl;
			cout << "Your new balance is $" << currentBalance << "!" << endl;
		}

		else {
			//Inavlid, cheque deposits must be more than $0
			cout << "\nCheque deposits must be more than $0\nWe apologize for the inconvenience..." << endl;
		}
	}



	//Withdrawal!~
	void makeWithdrawal(int amount) {
		if (amount > currentBalance) {
			//Invalid, user is broke
			cout << "\nBruh you're broke\nWe apologize for the inconvenience..." << endl;

		}
		else {

			if (amount <= 200 && amount % 20 == 0 && amount > 0) {
				//Valid! Subtracts amount from balance
				currentBalance -= amount;
				cout << "\nYou withdrew $" << amount << endl;
				cout << "Your new balance is $" << currentBalance << "!" << endl;
			}
			else {
				//Invalid, reasons listed below 
				cout << "\nWithdrawals must be more than $0, under $200, and a multiple of $20!\nWe apologize for the inconvenience..." << endl;

			}
		}
	}

};

int main() {

	OneClickBank bank; //Declares object of the class we created
	int choice;
	int cashORcheck;
	float deposit;
	int withdraw;

	while (1) {

		cout << "\nWelcome to OneClickBank!~\n" << endl;
		cout << "[1] Check Balance" << endl;
		cout << "[2] Make a Deposit" << endl;
		cout << "[3] Make a Withdrawal" << endl;
		cout << "[4] Exit Bank\n" << endl;
		cin >> choice; //User should enter 1, 2, 3, or 4 

		switch (choice) {
		case 1: bank.checkBalance(); //Check Balance Function
			break;

		case 2: //Making a Deposit
			cout << "\n[1] Make Cash Deposit" << endl;
			cout << "[2] Make Cheque Deposit\n" << endl;
			cin >> cashORcheck; //User should enter 1 or 2 
	
			cout << "\nHow much would you like to deposit?\nPlease enter numerical values only...\n" << endl;
			cin >> deposit; //User enters deposit amount

			bank.makeDeposit(cashORcheck, deposit); //Deposit Function
			break;

		case 3: //Making a Withdrawal
			cout << "\nHow much would you like to withdraw?~\nPlease enter numerical values only..." << endl;
			cout << "Withdrawals are limited to less than $200 and to be multiples of $20 (e.g. $20, $40, $60)\n" << endl;
			cin >> withdraw; //User enters withdrawal amount

			bank.makeWithdrawal(withdraw); //Withdrawal Function
			break;

		case 4: //Exits Bank
			cout << "\nThank you for using OneClickBank, come again or else I will liquidate all yours assests. :)" << endl;
			exit(1);
			break;
		
		default:
			cout << "\nInvalid Input >:(" << endl;
		}
	}

	return 0;
}
/*==================================================================

Nicole McDermott E - 115 LG
I pledge my honor that I have abided by the Stevens Honor System
 
You must create a new class called “VendingMachine”,
and perform the following using an object(variable) of this type in your main() function.
Your VendingMachine serves four or more items to customers
For each type, there is an initial stock of items, as well as a price per item.

Your program allows users to: select an item from a simple menu.

Enter a dollar amount.

Your vending machine prints a success message on screen, as well as the correct change amount.

If the machine runs out of stock for any item, it refunds the full amount back to the user.

==================================================================*/

#include<iostream>
using namespace std;

class VendingMachine {
public:
	//Initializes variables withing the VendingMachine class
	int matchaLatte, boxedWater, bananaMilk, strawberryMilk, cinnamonTea, blackMilkTea;
	float matchaPrice, waterPrice, bananaPrice, strawberryPrice, cinnamonPrice, teaPrice;

	//Gives the default value for each variable in VendingMachine class
	VendingMachine() {
		//Quantity
		matchaLatte = 5;
		boxedWater = 1;
		bananaMilk = 2;
		strawberryMilk = 4;
		cinnamonTea = 3;
		blackMilkTea = 0;

		//Price
		matchaPrice = 4.25;
		teaPrice = 4.50;
		waterPrice = 1.25;
		bananaPrice = 1.75;
		strawberryPrice = 1.65;
		cinnamonPrice = 3.99;
	}

	//Function that returns the change
	float payment(float x) {
		int money;
		float change;
		cout << "\n[1] to insert $5" << endl;
		cout << "[2] to inset $10" << endl;
		cout << "[3] to insert $100" << endl;
		cout << "Anything else to quit the program...\n" << endl;
		cin >> money;

		switch (money) {
		case 1:
			change = 5 - x;
			return change;

		case 2:
			change = 10 - x;
			return change;

		case 3:
			change = 15 - x;
			return change;
		}
	}

	//Function for each product in the VendingMachine
	//MATCHA LATTE
	void getMeMatcha() {
		float paid = payment(matchaPrice);
		if (matchaLatte > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is a can of Matcha Latte~" << endl;
			matchaLatte--;
		}
		else {
			cout << "\nSorry, no Matcha Latte! :(\nYou can have a refund..." << endl;
		}
	}

	//BOXED WATER
	void getMeWater() {
		float paid = payment(waterPrice);
		if (boxedWater > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is a box of Water" << endl;
			boxedWater--;
		}
		else {
			cout << "\nSorry no Water, thirst.\nYou can have a refund..." << endl;
		}
	}

	//STRAWBERRY MILK
	void getMeStrawberry() {
		float paid = payment(strawberryPrice);
		if (strawberryMilk > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is Strawberry Milk!~~" << endl;
			strawberryMilk--;
		}
		else {
			cout << "\nSorry no Strawberry Milk today :/\nYou can have a refund..." << endl;
		}
	}

	//BANANA MILK
	void getMeBanana() {
		float paid = payment(bananaPrice);
		if (bananaMilk > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is the best drink: Banana Milk, great choice." << endl;
			bananaMilk--;
		}
		else {
			cout << "\nSorry no Banana Milk today :(\nYou can have a refund..." << endl;
		}
	}

	//CINNAMON TEA
	void getMeCinnamon() {
		float paid = payment(cinnamonPrice);
		if (cinnamonTea > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is my mom's Cinnamon Tea, it's pretty good~" << endl;
			cinnamonTea--;
		}
		else {
			cout << "\nSorry my mom didn't make more today :(\nYou can have a refund..." << endl;
		}
	}

	//BLACK MILK TEA
	void getMeTea() {
		float paid = payment(teaPrice);
		if (blackMilkTea > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is the staple of my life: Black Milk Tea." << endl;
			blackMilkTea--;
		}
		else {
			cout << "\nSorry I drank all the Black Milk Tea!~\nYou can have a refund..." << endl;
		}
	}
};

int main() {

	int choice;
	VendingMachine var;

	while (1) {
		cout << "\n[1] Matcha Latte" << endl;
		cout << "[2] Boxed Water" << endl;
		cout << "[3] Strawberry Milk" << endl;
		cout << "[4] Banana Milk" << endl;
		cout << "[5] Cinnamon Tea" << endl;
		cout << "[6] Black Milk Tea" << endl;
		cout << "Anything else to quit the program...\n" << endl;
		cin >> choice;

		switch (choice) {
		case 1: var.getMeMatcha();
			break;

		case 2: var.getMeWater();
			break;

		case 3: var.getMeStrawberry();
			break;

		case 4: var.getMeBanana();
			break;

		case 5: var.getMeCinnamon();
			break;

		case 6: var.getMeTea();
			break;

		default: cout << "Goodbye!" << endl;
			exit(1);

		}
	}

}












/*
Nicole McDermott 11/15/20 I pledge my Honor that I have abided by the Stevens Honor System~
By the way, I don't like soda, so I changed the drinks <3
Hope that it was ok
*/

#include<iostream>
using namespace std;

/*
You must create a new class called “VendingMachine”,
and perform the following using an object(variable) of this type in your main() function.
Your VendingMachine serves four or more items to customers (e.g., Sprite, Water, etc., )
For each type, there is an initial stock of items(e.g., 30 cans of Sprite),
as well as a price per item(e.g., Sprite is $1.25).


Your program allows users to :
select an item from a simple menu(e.g., “Press 1 for Sprite”, “Press 2 for water” etc., )

Enter a dollar amount(e.g., “Insert cash $5, $10, or $20”)

Your vending machine prints a success message on screen, as well as the correct change amount
(e.g, User inserts $5 for Sprite costing $1.25, the correct change amount is $3.75)

If the machine runs out of stock for any item, it refunds the full amount back to the user.
*/

class VendingMachine {
public:
	//1. Attributes: what is the physical make up of this actor? 
	int matchaLatte, boxedWater, bananaMilk, strawberryMilk, cinnamonTea, blackMilkTea;
	float matchaPrice, waterPrice, bananaPrice, strawberryPrice, cinnamonPrice, teaPrice;

	//2. Construction: when a new variable of this type gets created, what is the default attribute?
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

	float payment(float x) {

		int money;
		float change;
		cout << "\nPress 1 to insert $5!" << endl;
		cout << "Press 2 to inset $10!" << endl;
		cout << "Press 3 to insert $100!" << endl;
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

	//3. Functionality: what functions is this actor allowed to perform?
	//MATCHA LATTE
	void getMeMatcha() {
		float paid = payment(matchaPrice);
		if (matchaLatte > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is a can of matcha latte~" << endl;
			matchaLatte--;
		}
		else {
			cout << "\nSorry, ran out of matcha latte! :(\nYou can have a refund..." << endl;
		}
	}

	//BOXED WATER
	void getMeWater() {
		float paid = payment(waterPrice);
		if (boxedWater > 0) {
			cout << "\nYour change is " << paid << endl;
			cout << "Here is a box of water" << endl;
			boxedWater--;
		}
		else {
			cout << "\nSorry no water, thirst.\nYou can have a refund..." << endl;
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
			cout << "Here is my mom's cinnamon tea, it's pretty good~" << endl;
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
		cout << "[3] Strawberry Milk!" << endl;
		cout << "[4] Banana Milk!" << endl;
		cout << "[5] Cinnamon Tea!" << endl;
		cout << "[6] Black Milk Tea!" << endl;
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












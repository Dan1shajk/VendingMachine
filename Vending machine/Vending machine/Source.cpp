#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void showMenue();
int getChoice();
double getPrice(int choice);
void getMoney(double price, double money);

int main()
{
	char input= 0;
	do {
		int choice;
		double price, money = 0;

		showMenue();
		choice = getChoice();
		price = getPrice(choice);
		getMoney(price, money);

		cout << "\nSelect another item? y/n \n";
		cin >> input;

	} while (input == 'y');

	return 0;
}

void showMenue()
{
	cout << "1: Water  $1.00\n";
	cout << "2: Pepsi  $1.50\n";
	cout << "3: coke   $2.00\n";
	cout << "4: snack  $3.00\n\n";
}

int getChoice()
{
	int choice;
	cout << "Please select an item number\n";
	cin >> choice;

	while (choice < 1 || choice > 4)
	{
		cout << "please enter a valid choice\n";
		cin >> choice;
	}
	
	return choice;
}

double getPrice(int choice)
{
	if (choice == 1)
	{
		return 1;
	}
	if (choice == 2)
	{
		return 1.50;
	}
	if (choice == 3)
	{
		return 2;
	}
	if (choice == 4)
	{
		return 3;
	}
	
}

void getMoney(double price, double money)
{
	double change = 0;
	cout << "Total is $" << setw(2) << price << endl;

	while (price > 0)
	{
	cout << "please enter money\n";
	cin >> money;

	
		if (money <= price)
		{
			price = price - money;
			cout << "balance is $" << setw(2) << price << endl;
		}

		else if (money > price)
		{
			change = money - price;
			cout << "Your change is $" << setw(2) << change << endl;
			break;
		}

		
	}
	cout << "enjoy!\n";

}
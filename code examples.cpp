#include <iostream>
#include <cmath>
using namespace std;
int main() {

	/*
	char my_operator;
	float x, y;
	cout << "choose an operator please: ";
	cin >> my_operator;
	cout << "enter two number please: ";
	cin >> x >> y;

	switch (my_operator) {
		case '+': cout << "\nx + y = " << x + y; break;
		case '-': cout << "\nx - y = " << x - y; break;
		case '*': cout << "\nx * y = " << x * y; break;
		case '/': cout << "\nx / y = " << x / y; break;
		default: "wrong choice!";


	}*/
	//******************************************************************************************
	/*
	int x,y;
	cout << "enter a number: ";
	cin >> x;
	y = x % 2;
	switch (y){
		case 0: cout << x << "is a even number!\n "; break;
		default: cout << x << "is a odd numebr!\n"; break;

	}*/
	//******************************************************************************************
	/*
	int number, result;
	cout << "please enter a positive number: ";
	cin >> number;

	if (number < 0)
		cout << "please give me a positive number!\n";
	else {
		result = sqrt(number);
		result *= result;
		if (result == number)
			cout << number << " is a full-square number.\n ";
		else cout << number << " is not a full-square number.\n ";

	}*/
	//******************************************************************************************
	/*
	int number;
	cout << "Enter a number(1 - 10) : ";
	cin >> number;

	switch (number){
		case 1: cout << "The Roman numeral version of " << number << " is I.\n"; break;
		case 2: cout << "The Roman numeral version of " << number << " is II.\n"; break;
		case 3: cout << "The Roman numeral version of " << number << " is III.\n"; break;
		case 4: cout << "The Roman numeral version of " << number << " is IV.\n"; break;
		case 5: cout << "The Roman numeral version of " << number << " is V.\n"; break;
		case 6: cout << "The Roman numeral version of " << number << " is VI.\n"; break;
		case 7: cout << "The Roman numeral version of " << number << " is VII.\n"; break;
		case 8: cout << "The Roman numeral version of " << number << " is VIII.\n"; break;
		case 9: cout << "The Roman numeral version of " << number << " is IX.\n"; break;
		case 10: cout << "The Roman numeral version of " << number << " is X.\n"; break;
		default: cout << "Enter a number in the range 1 through 10.\n"; break;

	}*/
	//*******************************************************************************************
	
	/*
	int number,r,lenght,width,base,height;
	const double PI = 3.14159;

	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n\n";

	cout << "Enter your choice (1-4): ";
	cin >> number;

	switch(number){
	case 1: cout << "\nEnter the circle's radius: ";
		cin >> r;
		if (r < 0) {
			cout << "\nThe radius can not be less than zero.\n";
		}else
		{
			cout << "\nThe area is " << PI * pow(r,2)<< endl;

		}break;
	case 2: cout << "\nEnter the rectangle's length: ";
		cin >> lenght;
		cout << "Enter the rectangle's width: ";
		cin >> width;
		cout << "\nThe area is " << lenght * width << endl;
		break;
	case 3: cout << "Enter the length of the base: ";
		cin >> base;
		cout << "Enter the triangle's height: ";
		cin >> height;
		cout << "\nThe area is " << base * height * 0.5 << endl;
		break;
	case 4: cout << "Program ending.\n";
		break;
	default: cout << "The valid choices are 1 through 4. Run the\n";
		cout << "program again and select one of those.\n";

	}*/

// WHÝLE DÖNGÜSÜ-WHÝLE LOOP
	/*int i = 1;
	while (i <= 10) {
		cout << i << "\n";
		i++;
	 }*/
// FOR DÖNGÜSÜ-FOR LOOP

	/*for (int i = 1; i <= 10; i++)
		cout << i << "\n";*/

	/*int i, number, control = 1;

	cout << "please enter a number: ";
	cin >> number;

	if (number < 2){
		cout << "please enter a number greater than 1!";
		return 0;
	}
	for (i = 2; i <= number / 2; i++) {
		if (number % i) {
			control = 2;
			break;
		}
	}
	if (control == 2) {
		cout << "the number is not a prime number!";
	}
	else
		cout << "the number is  a prime number!";
*/

	cout << "adasda";





	











	return 0;
}
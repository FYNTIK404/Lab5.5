// Lab5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Original data
	int number = 5;
	bool isAlive = false;
	string names[6] = { "Artem", "Motrya", "Melana", "Anna", "Tom", "Harry" };

	//Pointer with adres references
	int* p_number = &number;
	bool* p_isAlive = &isAlive;
	string* p_names = new string[3];
	p_names = &names[2];

	//Change original variables by using pointers
	*p_number = 555;
	*p_isAlive = true;
	p_names[0] = "Error";
	p_names[1] = "Error";

	//Output
	cout << number << "\n";
	cout << isAlive << "\n";
	cout << names[2] << "   " << names[3];
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

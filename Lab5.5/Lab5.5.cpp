// Lab5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Original data Вихідні данні
	int number = 5; // Змінна чисел яка зберігає цілі числа
	bool isAlive = false; // логічна змінна зберігає логічні виразити ТРУ ФОЛС
	string names[6] = { "Artem", "Motrya", "Melana", "Anna", "Tom", "Harry" }; // строковий масив в якому записано 6 елементів обявляємо    і заповнюємо одразу в одій стрічці

	//Pointer with adres references   // 
	int* p_number = &number;  //  Значення вказівника p_number буде = адрессі змінної int number = 5
	bool* p_isAlive = &isAlive; //  Значення вказівника * p_isAlive буде = адресі місцю де знаходиться значення цих змінних 
	string* p_names = new string[3]; // 
	p_names = &names[2]; // Вказівник на адресу другого елементу масиву   "Melana"

	//Change original variables by using pointers Змінна вихідних змінних за допомогою покажчиків
	*p_number = 555; // Міняємо значення  за адресами які вказані нащими індексами тобто  * Значення за адресом який ми предали у  p_number буде змінюватись на 555
	*p_isAlive = true; // Значення адресу який ми передали  p_isAlive і змінили з ФОЛС на ТРУ 
	p_names[0] = "Error"; //
	p_names[1] = "Error"; //

	//Output Вихід
	cout << number << "\n"; //
	cout << isAlive << "\n"; //
	cout << names[2] << "   " << names[3]; //
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

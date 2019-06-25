#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	/*cout << "long long:" << endl;
	cout << sizeof(long long) << endl;
	cout << 0 << "\t\t" << ULLONG_MAX << endl;
	cout << LLONG_MIN << "\t" << LLONG_MAX << endl;*/

	/*cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;*/
	
	double price_of_coffee;
	double weight_of_kitten;
	int t;	//температура или время
	int a;	//
	bool door_is_open;

	double price = 0;		//инициализация при объявлении.
	cout << price << endl;
	double weight;
	weight = 10;	//Инициализация после объявления.
	cout << weight << endl;

	cout << "Введите температуру воздуха: ";
	cin >> t;
	cout << t << endl;
}

/*
	identifiers
	1. ABC...Z
	   abc...z
	   012...9
	   _
	2. 
	3. Price price
	4. 

	camelCaseStyle
	CamelCaseStyle
	snake_case_style
	Jamshootian_Case_Style
*/

/*
	Errors:
	1. undeclared identifier (identifier is undefined);
	2. redefinition
	3. 
*/
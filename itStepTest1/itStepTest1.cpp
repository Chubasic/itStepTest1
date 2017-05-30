// itStepTest1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int SumOf(int var1, int var2)
{
	int sum = var1 + var2;
	return sum;
}
int Arithm(int var1, int var2)
{
	int res = (var1 + var2) / 2;
	return res;
}

int Goods(int amount)
{
	 const int BREAD = 9;
	 const int MILK = 15;
	 const float COOKIES = 14.60;
	 const float CIGARETTES = 23.50;
	 float howMuch = BREAD * amount;
	 float howMuch1 = MILK * amount;
	 float howMuch2 = COOKIES * amount;
	 float howMuch3 = CIGARETTES * amount;
	 float sum = howMuch + howMuch1 + howMuch2 + howMuch3;
	 return sum;
}

int kmsToMeteres(int kms)
{
	const int meter = 1000;
	int res = kms * meter;
}



int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int args1, args2;
	int result;

	cout << "### Homework ####" << "\n" << "\a";
	cout << "#### Student :: Oleshchuk Orest :: #### \a\n";
	cout << "Press enter to continue\n";
	cin.ignore();
	cout << "Module 1.1| Task 1 \a" << endl;
	cout << "\"To be or not to be\"" << endl;
	cout << "        \\Shakespeare\\" << endl;
	cout << "Press enter to continue\n";
	cin.ignore();
	cout << "Module 1.1| Task 2 \a" << endl;
	cout << "    :: Firma ::" << endl;
	cout << "Name:" << "\t\tUkrvtortrans\n" << "Year:" << "\t\t1980\n" << "Telefon: " << "\t(044) 20-30-50\n\n"; //escape stuff
	cout << "Press enter to continue\n";
	cin.ignore();
	cout << "Module 1.1| Task 3 \a" << endl;
	cout << "I" << "\t\t\t\t\t\tI\n";
	cout << "\n\tlove" << "\t\t\t\tlove\n"; //
	cout << "\n\t\tyou" << "\t\tyou\n";
	cout << "\n\t\t\tC++\n";
	cin.ignore();
	cout << "Module 1.2| Task 1 \a" << endl;
	cout << "Sum of two numbers \n" << "Eneter integers: \n";
	cin >> args1 >> args2;
	result = SumOf(args1, args2);
	cout << "Sum of " <<  args1 << " " << "and " << args2 << " is " << result << endl;
	cout << "Module 1.2| Task 2 \a" << endl;
	cout << "Arithmetic mean \n" << "Eneter integers: \n";
	cin >> args1 >> args2;
	result = Arithm(args1, args2);
	cout << "Arithmetic mean is " << result << endl;
	cin.ignore();
	cout << "Module 1.2| Task 3 \a" << endl;
	cout << "Convert kms into meters\n";
	cin >> args1;
	result = kmsToMeteres(args1);
	cout << "In kms:" << args1 << "\n" << "In meteres:" << result << "\n";//Converting kilometers into meters
	cin.ignore();
	cout << "Module 1.2| Task 4 \a" << endl;
	cout << "You bought bread, milk, cookies, cigarettes.\n" << "Enter the amount of each product" << endl;
	cout << "Bread: ";
	cin >> args1;
	Goods(args1);
	cout << "Milk: ";
	cin >> args1;
	Goods(args1);
	cout << "Cookies: ";
	cin >> args1;
	Goods(args1);
	cout << "Cigaretts: ";
	cin >> args1;
	Goods(args1);
	result = Goods(args1);
	cout << "Summ of goods is: " << result << endl;


	return 0;
}



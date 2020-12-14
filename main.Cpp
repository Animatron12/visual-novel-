#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	char name[50];
	cout << "1" << endl; //Ask for main name
	cin.getline(name, 50);
	cout << "2" << name << "3" << endl; //Next scene
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	return 0;
}
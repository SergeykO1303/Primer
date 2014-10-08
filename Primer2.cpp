#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	setlocale (LC_ALL, "rus");
	char str[12];
	cout << " Как тебя зовут?";
	cout << endl;
	cin >>  str;
	cout <<"Привет, меня зовут "  << str << endl;
	system ("pause");
	return 0;
}

#include <iostream>
using namespace std;
int main() 
{
	setlocale (LC_ALL, "rus");
	char str[]="Привет, меня зовут Сергей";
	cout << " Как тебя зовут?";
	cout << endl;
	cout << str << endl;
	system ("pause");
	return 0;
}

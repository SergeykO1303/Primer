#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	setlocale (LC_ALL, "rus");
	char str[12];
	cout << " ��� ���� �����?";
	cout << endl;
	cin >>  str;
	cout <<"������, ���� ����� "  << str << endl;
	system ("pause");
	return 0;
}

#include <iostream>
using namespace std;
#include <cmath>
int main() 
{
	setlocale (LC_ALL, "rus");
	float t,h,V;
	const float g=9.8;
	cout << "������� ��������";
	cout << endl;
	cin >> V;
	/*
	��� ������ ������
	*/
	h=pow(V,2)/(2*g); 
	cout <<"������ ������� ����� ";
		cout << h <<" m"<<endl ;
	/*
	"��� ������ ������
	*/
	t=V/g;
	cout <<"����� �������� ���� �� ������������ ������ ����� " <<t <<" s" <<endl;
	system ("pause");
	return 0;
}

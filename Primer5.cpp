#include <iostream>
using namespace std;
#include <cmath>
const float g=9.8;
float H(float V)
{
	float H;
	H=pow(V,2)/(2*g);
	return H;
}
float T(float V)
{
	float T;
	T=V/g;
	return T;

}
int main() 
{
	setlocale (LC_ALL, "rus");
	float t,h,V;
	cout << "������� ��������";
	cout << endl;
	cin >> V;
	/*
	��� ������ ������
	*/
	h=pow(V,2)/(2*g); 
	cout <<"������ ������� ����� ";
	cout << endl;
	cout << h <<" m"<<endl ;
	cout << H(V) <<" m"<<endl;
	/*
	"��� ������ ������
	*/
	t=V/g;
	cout <<"����� �������� ���� �� ������������ ������ ����� " <<t <<" s" <<endl <<T(V) <<" s"<<endl;

	system ("pause");
	return 0;
}

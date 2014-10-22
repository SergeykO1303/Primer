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
	cout << "Введите скорость";
	cout << endl;
	cin >> V;
	/*
	Это задача СЕРГЕЯ
	*/
	h=pow(V,2)/(2*g); 
	cout <<"Высота подъёма равна ";
	cout << endl;
	cout << h <<" m"<<endl ;
	cout << H(V) <<" m"<<endl;
	/*
	"ЭТО ЗАДАЧА АРТЕМА
	*/
	t=V/g;
	cout <<"Время поднятия тела до максимальной высоты равно " <<t <<" s" <<endl <<T(V) <<" s"<<endl;

	system ("pause");
	return 0;
}

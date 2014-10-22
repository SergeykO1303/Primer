#include <iostream>
using namespace std;
#include <cmath>
int main() 
{
	setlocale (LC_ALL, "rus");
	float t,h,V;
	const float g=9.8;
	cout << "Введите скорость";
	cout << endl;
	cin >> V;
	/*
	Это задача СЕРГЕЯ
	*/
	h=pow(V,2)/(2*g); 
	cout <<"Высота подъёма равна ";
		cout << h <<" m"<<endl ;
	/*
	"ЭТО ЗАДАЧА АРТЕМА
	*/
	t=V/g;
	cout <<"Время поднятия тела до максимальной высоты равно " <<t <<" s" <<endl;
	system ("pause");
	return 0;
}

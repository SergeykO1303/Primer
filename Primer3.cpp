#include <iostream>
using namespace std;
int main() 
{
	setlocale (LC_ALL, "rus");
	int R,S,S2;
	cout << "¬ведите радиус круга";
	cout << endl;
	cin >>  R;
	
//	S=pow(R,2)*3.14;
	S2=R*R*3.14;
	cout <<"площадь=" <<S2 << endl;
	system ("pause");
	return 0;
}

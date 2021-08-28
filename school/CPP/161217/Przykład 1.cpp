#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Podaj kwarta³"<< endl;
	cout<<"(W postaci numeru 1-4)";
	cin>>a;
 	switch (a)
	{
		case 0: cout <<"jedynak" ; break;
		case 1: cout <<"brat/siostra" ; break;
		case 2: cout <<"2 rodzenstwa" ; break;
		case 3: cout <<"3? no spoks" ; break;
		case 4: cout <<"wtf" ; break;
		default: cout << "co xDdDdDdD";
	}
	
	cin.get();
}

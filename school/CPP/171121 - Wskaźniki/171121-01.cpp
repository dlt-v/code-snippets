#include <iostream>
using namespace std;

int main()
{
	int telefon=12345; //zmienna liczbowa
	int *wsk=&telefon; //wska�nik wsk zawiera adres zmiennej telefon
	
	cout<<*wsk<<endl;
	
	return 0;
}

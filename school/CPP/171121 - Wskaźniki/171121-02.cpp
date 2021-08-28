#include <iostream>
using namespace std;

int zmienna;
int *wskaznik=&zmienna;
	
funkcja()
{
	cout<<"Podaj zmienna: ";
	cin>>*wskaznik;	
	
}

int main()
{
	
	funkcja();
	cout<<zmienna;
		
	return 0;
}

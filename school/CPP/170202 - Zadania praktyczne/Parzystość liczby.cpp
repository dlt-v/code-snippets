#include<iostream>

using namespace std;

SPRAWDZAM(int a)
{
	if(a%2==0) cout<<"Liczba jest parzysta"<<endl;
	else cout<<"Liczba nie jest parzysta"<<endl;
	
	
	
}

int main()
{
	cout<<"Podaj liczbe naturalna"<<endl;
	int a;
	cin>>a;
	cout<<"Sprawdzam..."<<endl;
	
	SPRAWDZAM(a);
	
	return 0;
	
	
}

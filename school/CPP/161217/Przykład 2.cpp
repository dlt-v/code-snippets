#include <iostream>
using namespace std;
int main ()
{
	int a, b,  dzial;
	cout<<"Podaj A"<< endl;
	cin>>a;
	cout<<"Podaj B"<< endl;
	cin>>b;
	if (b==0) cout<<"Nie dzielimy przez zero!";
	else  cout<<"Wybierz dzialanie: 1. Dodawanie, 2. Odejmowanie, 3. Mnozenie, 4. Dzielenie",
	cin>>dzial;
		switch (dzial)
	{
		case 1: cout <<a<<"+"<<b<< "=" <<a+b; break;
		case 2: cout <<a<<"-"<<b<< "=" <<a-b; break;
		case 3: cout <<a<<"*"<<b<< "=" <<a*b; break;
		case 4: cout <<a<<":"<<b<< "=" <<a/b; break;
		
		default: cout << "no chyba nie xD";
	}
		
 
 
 
	
	cin.get();
}

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int a, b;
	char kalkulator;
	cout<<"Podaj A"<< endl;
	cin>>a;
	cout<<"Podaj B"<< endl;
	cin>>b;
	if (b==0) cout<<"Nie dzielimy przez zero!";
	else  cout<<"Wybierz dzialanie: + Dodawanie, - Odejmowanie, * Mnozenie, / Dzielenie",
	cin>>kalkulator;
		switch (kalkulator)
	{
		case '+': cout <<a<<"+"<<b<< "=" <<a+b; break;
		case '-': cout <<a<<"-"<<b<< "=" <<a-b; break;
		case '*': cout <<a<<"*"<<b<< "=" <<a*b; break;
		case '/': cout <<a<<":"<<b<< "=" <<a/b; break;
		
		default: cout << "no chyba nie xD";
	}
 
	 
	cin.get();
		return 0;
}

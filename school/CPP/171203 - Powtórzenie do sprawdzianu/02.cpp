#include<iostream>
#include<cstring>

using namespace std;

struct struktura
{
	string imie;
	string nazwisko;
	int wiek;	
}osica, Korzen;

main()
{
	cin>>osica.imie;
	cout<<endl;
	cin>>osica.nazwisko;
	cout<<endl;
	cin>>osica.wiek;
	cout<<endl;
	
	cout<<osica.imie<<osica.nazwisko<<osica.wiek<<endl;
	
	system("pause");
	return 0;
}

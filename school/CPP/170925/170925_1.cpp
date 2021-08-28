#include <iostream>
#include <cstring>
#include <string>
#include <windows.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>

using namespace std;



imie()
{
	string imie;
cout<<"Podaj przykladowe imie: ";
cin>>imie;
int dlugoscimie=imie.size();
cout<<endl<<"Dlugosc imienia wynosi: "<<dlugoscimie<<endl;	
}

nazwisko()
{
	string nazwisko;
	cout<<"Podaj przykladowe nazwisko: ";
	cin>>nazwisko;
	cout<<endl<<"Wyciagamy litery..."<<endl<<"Gdzie chcesz zaczac? ";
	int dlugosca, dlugoscb;
	cin>>dlugosca;
	cout<<endl<<"Ile liter chcesz wyciagnac? ";
	cin>>dlugoscb;
	
	string wynik=nazwisko.substr(dlugosca-1, dlugoscb);
	
	
	cout<<endl<<"Wyznaczony lancuch to: "<<wynik<<endl;
	
	
	
}

wyczysc()
{
	sleep(3);
	system("cls");
}

int main()
{
	
	string lancuch;
	lancuch="siemaneczko";
	string b="maneczko";
	int a=lancuch.find(b);
	cout<<a+1;
	
	return 0;
	system("pause");
	
}

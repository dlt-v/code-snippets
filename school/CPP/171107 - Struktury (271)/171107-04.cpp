#include <iostream>
#include <cstring> //struktura o nazwie szkola skladajaca sie z nastepujacych pol: imie, nazwisko, numer ewidencyjny, klasa, samodzielnie okresl typ pol
using namespace std; //zadeklaruj 3 zmienne strukturalne uczen1, uczen2, uczen3, wypelnij je danymi zgodnie ze struktura i wyswietl w konsoli

struct szkola
{
	string imie;
	string nazwisko;
	int pesel;
	string klasa;
};

int main()
{
	
	szkola grupa[3];
	for(int i=0;i<3;i++)
	{
	
	cout<<endl<<"Podaj imie ucznia: ";
	cin>>grupa[i].imie;
	cout<<endl<<"Podaj nazwisko ucznia: ";
	cin>>grupa[i].nazwisko;
	cout<<endl<<"Podaj pesel ucznia: ";
	cin>>grupa[i].pesel;
	cout<<endl<<"Podaj klase ucznia: ";
	cin>>grupa[i].klasa;
	}
	
	cout<<endl<<"Wprowadzono nastepujacych uczniow: "<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<grupa[i].imie<<" "<<grupa[i].nazwisko<<" "<<grupa[i].pesel<<" "<<grupa[i].klasa<<" "<<endl<<endl;
	}
	
cin.get();
return 0;
}

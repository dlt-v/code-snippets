//w kt�rym utworzysz struktur� o nazwi� "komis" sk�adaj�c� si� z najtepujacych p�l marka, model, rocznik, pochodzenie, przebieg, cena.
//nast�pnie utw�rz tablic� struktur o nazwie "osobowe" sk�adaj�c� si� z 3 element�w
//oraz "ci�arowe" r�wnie� z  element�w nast�pnie wprowad� dane do programu i wy�wietl je, typy p�l okre�l samodzielnie.

#include <iostream>
#include <cstring>

using namespace std;

struct komis
{
	string marka;
	string model;
	int rocznik;
	string pochodzenie;
	int przebieg;
	int cena;	
};
komis osobowe[3];
komis ciezarowe[3];

WPROWADZ()
{
cout<<endl<<"SAMOCHODY OSOBOWE"<<endl;
	
	for(int i=0;i<3;i++)
	{
	cout<<endl<<"Podaj marke: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].marka;
	cout<<endl<<"Podaj model: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].model;
	cout<<endl<<"Podaj rocznik: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].rocznik;
	cout<<endl<<"Podaj pochodzenie: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].pochodzenie;
	cout<<endl<<"Podaj cene: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].cena;
	cout<<endl<<"Podaj przebieg: "<<i+1<<" samochodu: ";
	cin>>osobowe[i].przebieg;
	}	
	cout<<endl<<"SAMOCHODY CIEZAROWE"<<endl;
	komis ciezarowe[3];
	for(int i=0;i<3;i++)
	{
	cout<<endl<<"Podaj marke: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].marka;
	cout<<endl<<"Podaj model: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].model;
	cout<<endl<<"Podaj rocznik: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].rocznik;
	cout<<endl<<"Podaj pochodzenie: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].pochodzenie;
	cout<<endl<<"Podaj cene: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].cena;
	cout<<endl<<"Podaj przebieg: "<<i+1<<" samochodu: ";
	cin>>ciezarowe[i].przebieg;
	}
	
	
}
	WYPISZ()
	{
		cout<<endl<<"WPROWADZONO NASTEPUJACE SAMOCHODY OSOBOWE: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<osobowe[i].marka<<"  "<<osobowe[i].model<<"  "<<osobowe[i].rocznik<<"  "<<osobowe[i].pochodzenie<<"  "<<osobowe[i].cena<<"  "<<osobowe[i].przebieg<<endl;
	}
	cout<<endl<<endl<<endl;

	
	cout<<endl<<"WPROWADZONO NASTEPUJACE SAMOCHODY CIEZAROWE: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<ciezarowe[i].marka<<"  "<<ciezarowe[i].model<<"  "<<ciezarowe[i].rocznik<<"  "<<ciezarowe[i].pochodzenie<<"  "<<ciezarowe[i].cena<<"  "<<ciezarowe[i].przebieg<<endl;
	}	
	}

int main()
{	
	WPROWADZ();		
	WYPISZ();
	
	system("pause");
	return 0;
}

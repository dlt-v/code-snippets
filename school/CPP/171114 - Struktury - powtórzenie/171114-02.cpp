//w kt�rym utworzysz struktur� o nazwi� o dowolnej nazwie zawieraj�c� 4 dowolne pola, nast�pnioe zadeklaruj 3 zmienne strukturalne, wype�nij je danymi zgodnie ze struktur� i wy�iwetl w konsoli

#include <iostream>
#include <cstring>

using namespace std;

struct sklep
{
	string marka;
	string model;
	int rok_produkcji;
	int pamiec;
};

int main()
{	
 	sklep telefon[3];
	cout<<endl<<"Telefony"<<endl;
	
	for(int i=0;i<3;i++)
	{
	cout<<endl<<"Podaj marke "<<i+1<<" komorki: ";
	cin>>telefon[i].marka;
	cout<<endl<<"Podaj model: "<<i+1<<" komorki: ";
	cin>>telefon[i].model;
	cout<<endl<<"Podaj rok_produkcji: "<<i+1<<" komorki: ";
	cin>>telefon[i].rok_produkcji;
	cout<<endl<<"Podaj ilosc pamieci: "<<i+1<<" komorki: ";
	cin>>telefon[i].pamiec;

	}	
	{
		cout<<endl<<"WPROWADZONO NASTEPUJACE KOMORKI: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<telefon[i].marka<<"  "<<telefon[i].model<<"  "<<telefon[i].rok_produkcji<<"  "<<telefon[i].pamiec<<endl;
	}
	cout<<endl<<endl<<endl;
	
	system("pause");
	return 0;
}}

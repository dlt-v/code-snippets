#include<iostream> //program otwiera dane4 i bierze z nich dane a potem je wyœwietla
#include<fstream>	//obowi¹zkowa biblioteka

using namespace std;

main()
{
	ifstream plik;	//deklarujemy plik
	plik.open("dane4.doc");	//otwieramy plik i podajemy jego lokalizacje
	int a,b,c;	//deklarujemy zmienne
	plik>>a;
	plik>>b;
	plik>>c;		//pobieramy zmienne
	cout<<a<<b<<c<<endl;	//wyswietlamy
	plik.close();	//zamykamy plik
	return 0;
}

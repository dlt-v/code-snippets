#include<iostream>	//program wczytuje z klawiatury 2 zmienne i zapisuje ich sumê do pliku.
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	ofstream plik;
	plik.open("plik.txt");
	int a, b, c;
	cout<<"Podaj zmienna A: ";
	cin>>a;
	cout<<"Podaj zmienna B: ";
	cin>>b;
	c=a+b;
	plik<<c<<endl;
	plik.close();
	
	return 0;
	
}

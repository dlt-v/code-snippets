#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;


//napisz srednia 5 liczb w funkcji xDDDDD


int ile_ocen;
main()
{
	cout<<"Ile ocen?"<<endl;
	cin>>ile_ocen;
	cout<<endl;
	
	float tablica[ile_ocen], suma, srednia;
	 
	
	for (int i=0;i<ile_ocen;i++)
	{
		cout<<"Podaj "<<i+1<<" liczbe"<<endl;
		cin>>tablica[i];
		suma += tablica[i];	
	}
	srednia=suma/ile_ocen;
	cout<<"Srednia to: "<<srednia<<endl;
	
	
	
}

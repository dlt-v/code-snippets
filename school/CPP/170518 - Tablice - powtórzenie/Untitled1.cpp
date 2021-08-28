//napisz program w którym wygenreujesz tablice 4x2, zawierajaca liczby rzeczywiste, podane z klawiatury,a nastepnie wyswietlic srednia prowadzonych liczb.

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

main()
{
	cout<<"Hello there!"<<endl;
	float Tablica[4][2], suma;
	
	
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<2;j++)
			{
				cout<<"Podaj liczbe dla tablicy "<<i+1<<" "<<j+1<<": ";
				cin>>Tablica[i][j];
				suma+=Tablica[i][j];
				cout<<endl;
			}
		}
		
	float srednia;
	srednia=suma/8;
	cout<<"Srednia wprowadzonych liczb to: "<<srednia<<endl;
	return 0;
}

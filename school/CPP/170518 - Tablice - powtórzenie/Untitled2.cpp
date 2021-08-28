//napisz program w którym  utworzysh funkcje "losuj" generuj¹c¹ liczby pseudolosowe z zakresu od -15 do 70 do tablicy  o wymiarach 5x4, potem j¹ wywróæ.
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;

losuj(float Tablica[5][4])
{
	cout<<"Przed tranzpozycja:"<<endl;
	srand(time(NULL));
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			Tablica[i][j]=(rand()%85)-15;
			cout<<setw(5)<<Tablica[i][j];
		}
		cout<<endl;
		
	}
	cout<<"Po tranzpozycji:"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<setw(5)<<Tablica[j][i];
		}
		cout<<endl;
	}
}

main()
{
	cout<<"Losowanie tablicy w toku..."<<endl;
	float Tablica[5][4];
	
	losuj(Tablica);
	
	return 0;
}

//transpondencja?? tablicy 15 - 30

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

main()
{
	srand(time(NULL));
	cout<<"Czesc i czolem!"<<endl<<"Tablice!"<<endl;
	float Tablica[5][4];
		for (int i=0;i<5;i++)
		{
			for(int j=0;j<4;j++)
			{
			Tablica[i][j]=(rand()%15)+15;
			cout<<setw(5)<<Tablica[i][j];
			}
			cout<<endl;
		
		}
	cout<<"TRANSOFMRACJA"<<endl;
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<5;j++)
			{
				cout<<setw(5)<<Tablica[j][i];
			}
			cout<<endl;
		}
		return 0;
}

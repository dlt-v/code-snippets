//napisz program, kt�ry wygenerujemy losowo tablic� 6x4 z przedzia�u [-12;15]. Elementami tablicy s� liczby ca�kowite.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <windows.h>  //do funkcji Sleep

using namespace std;


main()
{
	int Tablica[6][4];
	srand (time(NULL));
	
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<4;j++)               //pami�taj �e to J a nie I!!
		{
			Tablica[i][j]=(rand()%27)-12;	//jako� dzia�a :v
		}
	}
	
	cout<<"Wylosowana tablica to: "<<endl<<endl;
		for (int i=0;i<6;i++)
	{
		for (int j=0;j<4;j++)
		{
			cout<<setw(5)<<Tablica[i][j];
			Sleep(250);					 	//Sleep z du�ej!!!
		}
		cout<<endl<<endl;
	}
	
	
	
	cin.get();
	return 0;
}

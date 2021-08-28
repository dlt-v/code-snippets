#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//wylosuj i wypisz 10 wylosowanych liczb
using namespace std;

losuj (int *tablica, int i)
{
	srand (time(NULL));
	
	
	for (i=0;i<10;i++)
	{
		tablica[i]=rand()%50+20;
			
	}
	cout<<"Wylosowane liczby to:"<<endl;
	for (i=0;i<10;i++)
	{
		cout<<i+1<<" liczba to:"<<tablica[i]<<endl;
		
	}
		for (i=0;i<10;i++)
	{
		cout<<setw(10)<<tablica[i];
		
	}
	
}




main()
{
	int tablica[10], i;
	losuj (tablica, 10);
	cin.get();
}



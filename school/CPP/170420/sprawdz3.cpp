#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//napisz program obliczaj¹cy w funkcji 5 wylosowanych liczb od 20 do 30
using namespace std;

losuj (int *tablica,int i)
{
	srand (time(NULL));
	for (int i=0;i<5;i++)
	{
		tablica[i]=rand()%10+20;
	}
	
	for (int i=0;i<5;i++)
	{
		cout<<setw(5)<<tablica[i];
	}		
	
}


main()
{
	int tablica[5], i;
	losuj(tablica, 5);
	cin.get();
}

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

losuj (int *tablica, int i)
{

		srand (time(NULL));
		for (i=0;i<10;i++)
		{
			tablica[i]=rand()%50+20;
			
		}
		cout<<"wylosowana tablica: ";
		for (i=0;i<10;i++)
		{
			cout<<setw(10)<<tablica[i];
			
		}
}
main ()
{
	int tablica[10], i;
	losuj (tablica,10);
	cin.get();
	
}


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

losuj (int *tab, int i)
{

		srand (time(NULL));
		for (i=0;i<5;i++)
		{
			tab[i]=(rand()%30);
			
		}
		cout<<"wylosowana tablica: ";
		for (i=0;i<5;i++)
		{
			cout <<setw(5)<<tab[i];
			
		}
}
main ()
{
	int tab[5], i;
	losuj (tab,5);
	cin.get();
	
}


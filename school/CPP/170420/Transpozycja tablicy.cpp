//Transpozucja - operacja tworzenia macierzy transponowanej.
//Macierz transponowana - powstaje z danej macierzy poprzez zamianê jej wierszy na kulmny i kolumn na wiersze.
		//poprostu odwrócone ¿e kolumny to wiersze itd
		//¿adna filozofia
		
		
//napisz program, który generuje losow¹ tablicê 3x5, zawieraj¹ca elementy ca³kowite w przedzia³u [-10,10].
//Nastêpnie dokonaj transpozycji wygenerowanej tablicy, W wyniku dzia³ania programu wyœwietl obie tablie tablice z przed i po transpozycji.


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;    //Pamiêtaj o tym ku..

main()
{
	int tab[3][5];
	cout<<"Przed tranzpozycja"<<endl;
	srand(time(NULL));
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			tab[i][j]=rand()%20-10;
			cout<<setw(5)<<tab[i][j];  //normalna tablica z losowymi liczbami
		}
		cout<<endl;
	}
	
	cout<<"Po tranzpozycji"<<endl;
	for(int i=0;i<5;i++)				//"i" i "j" zapisujemy na odwrót, w sensie ¿e i<5, j<3...
	{
		for(int j=0;j<3;j++)
		{
			cout<<setw(5)<<tab[j][i];			//zamieniamy miejscami "i" i "j"
		}
		cout<<endl;
		
	}
	return 0;
}

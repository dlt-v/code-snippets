//napisz program który wczyta z klawiatury dowoln¹ tablicê o wymiarach 4x3 oraz obliczy sumê wprowadzonych elemnentów
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;




main()
{
	int Tablica[4][3];
	
	cout<<"Elo!"<<endl;
	
		for(int i=0;i<4;i++)
		{
			for (int j=0;j<3;j++)
			{
				cout<<"Tablica ["<<i<<"]["<<j<<"] = ";
				cin>>Tablica[i][j];	
			}
			
			
		}
	cout<<"Suma wynosi: ";
	int suma;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
				suma+=Tablica[i][j];	
		}		
	}
	
	cout<<suma;
	cin.get();
	return 0;
		
}

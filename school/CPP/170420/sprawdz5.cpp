#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//dej mnie oceny a ja ci dem sredniom

using namespace std;



srednia(int liczba_ocen)
{
	float oceny[2][3];
	float suma;
	
	
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<"Podaj ocene: ";
				cin>>oceny[i][j];
				cout<<endl;
				
				suma+=oceny[i][j];
			}
			
			
			
			
			
		}
	float srednia;
	srednia=suma/liczba_ocen;
	cout<<"Srednia ocen wynosi: "<<srednia<<endl;

}





main()
{
	int liczba_ocen=6;
	
	srednia(liczba_ocen);
	
	
	cin.get();
}

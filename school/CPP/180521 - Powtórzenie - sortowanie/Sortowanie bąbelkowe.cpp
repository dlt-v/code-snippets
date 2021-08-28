#include <iostream>
#include <cstdlib>
using namespace std;

void sortuj ()
{
	double T[100];
	int n;
	cout<<"Podaj liczbe elementow tablicy: ";
	cin>>n;
	cout<<endl<<"Podaj elementy tablicy:"<<endl;
	
	for (int i=0;i<n;i++)
		{
			cout<<"T["<<i+1<<"] = ";
			cin>>T[i];
			cout<<endl;
		}
	
	
	double pom;							
	for (int j=n-1;j>0;j--)
		for (int i=0;i<j;i++)
		
		if(T[i]>T[i+1]) //Jak chcemy malejaca to zamieniamy znak porownania
		{
			pom=T[i];
			T[i]=T[i+1];
			T[i+1]=pom;
		}
	cout<<"Posortowana tablica:";
	for (int i=0;i<n;i++)
	{
		cout<<endl<<"T["<<i+1<<"] = "<<T[i];	
	}
	
}
main()
{
	sortuj ();
}

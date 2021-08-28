#include <iostream>
#include <cstdlib>

using namespace std;

void sortuj()
{
	int n,k;
	double T[100], pom;
	
	cout<<"Podaj liczbe elementow tablicy: ";
	cin>>n;
	cout<<endl<<"Podaj elementy tablicy:"<<endl;
	
	for (int i=0;i<n;i++)
		{
			cout<<"T["<<i+1<<"] = ";
			cin>>T[i];
			cout<<endl;
		}
//===================================================	
	for (int i=0;i<n-1;i++) //n-1
 	{
  		k=i; //WA¯NE
  		for (int j=i+1;j<n;j++) //i+1
   			if (T[j]<T[k]) k=j;
  			pom=T[k];
  			T[k]=T[i]; //WA¯NE
  			T[i]=pom;
 	}
	
	
	
	
		cout<<"Posortowana tablica:";
	for (int i=0;i<n;i++)
	{
		cout<<endl<<"T["<<i+1<<"] = "<<T[i];	
	}
}
main ()
{
	sortuj();
}

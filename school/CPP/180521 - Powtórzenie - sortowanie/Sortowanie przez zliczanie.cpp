#include <iostream>
#include <cstdlib>

using namespace std;

void sortuj()
{
	int n, m=101;
	int T[100];
	
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
	int P[100]={0};
	for (int i=0;i<n;i++) P[T[i]]++;
	int k=0;
	for (int i=0;i<m;i++)
		for(int j=P[i];j>=1;j--)
		{
			T[k]=i;
			k++;
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

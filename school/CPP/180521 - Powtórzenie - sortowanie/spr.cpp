#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>

int MAX=100; //WA¯NE

using namespace std;
void sortuj()
{
cout<<"Podaj liczbe elementow: ";
int n, m;
cin>>n;
m=101;
cout<<endl<<"Tablica nie posortowana: "<<endl;
int T[n];
srand(time(NULL));
for(int i=0;i<n;i++)
	{
		T[i]=rand()%100;
		cout<<"TAB["<<i+1<<"]="<<T[i]<<endl;
	}
//==============================
int pom;
for(int j=n-1;j>0;j--)
	for(int i=0;i<j;i++)
	if(T[i]>T[i+1])
	{
		pom=T[i];
		T[i]=T[i+1];
		T[i+1]=pom;
	}
	
//==============================

cout<<endl<<"Tablica posortowana: "<<endl;
for (int i=0;i<n;i++)
{
	cout<<"TAB["<<i+1<<"]="<<T[i]<<endl;
}

}



main()
{
	sortuj();
}

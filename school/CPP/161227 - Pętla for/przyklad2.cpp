#include<iostream>
using namespace std;

int liczba, suma;

int main()
{
	cout<<"podaj liczbem"<<endl;
	cin>>liczba;
		for(int i=0; i<=liczba; i++)
		{
			suma=suma+i;
		}
	cout<<"suma wynosi: "<<suma<<endl;
	
	return 0;
}

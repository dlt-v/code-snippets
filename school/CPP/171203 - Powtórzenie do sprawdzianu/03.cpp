#include<iostream>
#include<cstring>

using namespace std;

struct struktura
{
	string imie;
	string nazwisko;
	int wiek;	
}osica[2];

main()
{
	for(int i=0;i<2;i++)
	{
		cout<<endl<<"Podaj imie osicy "<<i+1<<":";
		cin>>osica[i].imie;
		cout<<endl<<"Podaj nazwisko osicy "<<i+1<<":";
		cin>>osica[i].nazwisko;
		cout<<endl<<"Podaj wiek osicy "<<i+1<<":";
		cin>>osica[i].wiek;
	}
	
	for(int j=0;j<2;j++)
	{
		cout<<endl<<"Osica nr "<<j+1<<": "<<osica[j].imie<<" "<<osica[j].nazwisko<<" "<<osica[j].wiek<<endl;
		
	}
	
	system("pause");
	return 0;
}

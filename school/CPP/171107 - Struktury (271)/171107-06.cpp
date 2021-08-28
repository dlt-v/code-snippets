#include <iostream>
#include <cstring>
using namespace std;

struct uczen			//definicja struktury
{
	char imie[20];
	char nazwisko[20];
	long numer_akt;
};						//srednik!

int main()
{
	uczen grupa[3];
	cout<<"Wypelniamy tablice z danymi uczniow z naszej grupy: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl<<"Podaj imie ucznia: ";
		cin>>grupa[i].imie;
		cout<<endl<<"Podaj nazwisko ucznia: ";
		cin>>grupa[i].nazwisko;
		cout<<endl<<"Podaj numer akt ucznia: ";
		cin>>grupa[i].numer_akt;
	}
	
	cout<<"WPROWADZONO NASTEPUJACYCH UCZNIOW: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<grupa[i].imie<<"  "<<grupa[i].nazwisko<<"  "<<grupa[i].numer_akt<<endl;
	}
	cin.get();
	return 0;
}


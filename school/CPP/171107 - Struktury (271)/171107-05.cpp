#include <iostream>
#include <cstring>
using namespace std;

struct osoba
{
	char imie[20];
	char nazwisko[20];
	int wiek;
};

int main()
{
	
osoba uczen;
cout<<"Podaj imie ucznia: ";
cin>>uczen.imie;
cout<<endl<<"Podaj nazwisko ucznia: ";
cin>>uczen.nazwisko;
cout<<endl<<"Podaj wiek ucznia: ";
cin>>uczen.wiek;
cout<<endl<<endl<<"Informacje o uczniu: "<<endl;
cout<<uczen.imie<<" "<<uczen.nazwisko<<" "<<uczen.wiek<<" lat"<<endl;
cin.get();	
system("pause");
return 0;
}

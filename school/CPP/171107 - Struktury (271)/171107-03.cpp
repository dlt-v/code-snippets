#include <iostream>
using namespace std;

struct osoba
{
	string imie;
	string nazwisko;
	int wiek;
	
};

int main()
{
	osoba listonosz={"Jan","Kowalski",55};
	osoba strazak={"Piotr","Nowak",47};
	
	cout <<"Dane listonosza: "<< listonosz.imie<<" "<<listonosz.nazwisko<<" "<<listonosz.wiek<<endl;
	cout <<"Dane strazaka: "<< strazak.imie<<" "<<strazak.nazwisko<<" "<<strazak.wiek<<endl;
	
	system("pause");
	return 0;
}

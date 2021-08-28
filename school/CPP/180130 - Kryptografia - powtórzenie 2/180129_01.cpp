#include <iostream>
#include <cstring>

using namespace std;


string szyfruj (string tekst)
{
	string wynik;
	int dl=tekst.size();
	for (int i=0;i<dl;i+=4) wynik+=tekst[i];
	for (int i=1;i<dl;i+=2) wynik+=tekst[i];
	for (int i=2;i<dl;i+=4) wynik+=tekst[i];
	return wynik;
}
main()
{
	string tekst;
	cout<<"Podaj tekst jawny: ";
	cin>>tekst;

	cout<<"Szyfrogram: "<<szyfruj(tekst)<<endl;
	return 0;
}

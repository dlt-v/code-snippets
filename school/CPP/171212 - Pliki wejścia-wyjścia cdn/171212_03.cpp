// dwie dowolne liczby, nastepnie oblicza ich sume i wynik zapisuje do pliku o nazwie sumowanie
#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ofstream plik;
	plik.open("E:/Szko�a/C++/171212 - Pliki wej�cia-wyj�cia cdn/test3.doc");
	string dane;
	cout<<"Podaj dane: ";
	getline(cin,dane);
	plik<<dane;
	plik.close();
	return 0;
}

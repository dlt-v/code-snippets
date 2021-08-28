// dwie dowolne liczby, nastepnie oblicza ich sume i wynik zapisuje do pliku o nazwie sumowanie
#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ifstream plik;
	plik.open("E:/Szko³a/C++/171212 - Pliki wejœcia-wyjœcia cdn/test2.txt");
	string dane, dane2;
	getline(plik, dane);
	ifstream plik2;
	plik2.open("E:/Szko³a/C++/171212 - Pliki wejœcia-wyjœcia cdn/test3.doc");
	getline(plik2,dane2);
	plik2.close();
	cout<<dane<<endl<<dane2<<endl;
	return 0;
}

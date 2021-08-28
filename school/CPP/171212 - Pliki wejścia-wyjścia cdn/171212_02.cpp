// dwie dowolne liczby, nastepnie oblicza ich sume i wynik zapisuje do pliku o nazwie sumowanie
#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ifstream plik;
	plik.open("E:/Szko³a/C++/171212 - Pliki wejœcia-wyjœcia cdn/test3.txt");
	int a,b,s;
	plik>>a>>b;
	s=a+b;
	cout<<s<<endl;
	plik.close();
	ofstream plik2;
	plik.open("E:/Szko³a/C++/171212 - Pliki wejœcia-wyjœcia cdn/wynik.txt");
	plik2<<s<<endl;
	plik2.close();
	return 0;
}

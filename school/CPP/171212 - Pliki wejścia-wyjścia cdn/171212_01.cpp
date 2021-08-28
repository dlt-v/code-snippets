// dwie dowolne liczby, nastepnie oblicza ich sume i wynik zapisuje do pliku o nazwie sumowanie
#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ofstream plik;
	int a, n, suma;
	cout<<"Podaj zmienna a: ";
	cin>>a;
	cout<<"Podaj zmienna n: ";
	cin>>n;
	plik.open("E:/Szko³a/C++/171212 - Pliki wejœcia-wyjœcia cdn/sumowanie2.txt");
	for (int i=0;i<n;i++)
	{
		a=a+1;
			plik<<a<<endl;
			cout<<i<<endl;	
	}


	plik.close();
	return 0;
}

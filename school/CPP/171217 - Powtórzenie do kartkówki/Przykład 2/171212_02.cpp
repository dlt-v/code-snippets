#include<iostream> //plik importuje zmienna z pliku i wypisuje na monitorze.
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	ifstream plik;
	plik.open("plik.txt");
	int zmienna1, zmienna2;
	plik>>zmienna1;
	plik>>zmienna2;
	cout<<"Zmienna to: "<<zmienna1<<zmienna2<<endl;
	plik.close();
	return 0;	
}

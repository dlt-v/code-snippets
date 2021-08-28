#include<iostream> //plik wypisuje lancuch do pliku.txt
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	ofstream plik;
	plik.open("plik.txt");
	string lancuch;
	cout<<"Podaj lancuch: ";
	getline(cin, lancuch);
	plik<<lancuch;
	plik.close();
	return 0;	
}

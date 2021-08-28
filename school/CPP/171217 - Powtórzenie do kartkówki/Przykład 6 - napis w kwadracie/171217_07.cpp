#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ramka;
	ramka.open("plik1.txt");
	string gw1, gw2, gw3, gw4, gw5, gw6, gw7, gw8, napis;
	getline(ramka, gw1);
	getline(ramka, gw2);
	getline(ramka, gw3);
	getline(ramka, gw4);
	getline(ramka, gw5);
	getline(ramka, gw6);
	getline(ramka, gw7);
	getline(ramka, gw8);
	ramka.close();
	
	ifstream tekst;
	tekst.open("plik2.txt");
	getline(tekst, napis);
	cout<<gw1<<endl<<gw2<<napis<<gw4<<endl<<gw8;
	
    tekst.close();
    cin.sync();
    return 0;
}

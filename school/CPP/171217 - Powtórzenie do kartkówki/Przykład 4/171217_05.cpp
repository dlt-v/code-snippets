#include<iostream>//program importuje zmienne z pliku xls
#include<cstring>
#include<fstream>

using namespace std;

main()
{
	ifstream plik;
	plik.open("plik.xls");
	int a,b,c;
	plik>>a;
	plik>>b;
	plik>>c;
	cout<<"Eksportowane zmienne to: "<<a<<b<<c<<endl;
	
	
	
	plik.close();
	return 0;
}

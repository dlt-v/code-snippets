#include<iostream>//program eksportuje zmienne do pliku xls
#include<cstring>
#include<fstream>

using namespace std;

main()
{
	ofstream plik;
	plik.open("plik.xls");
	int a=1,b=2,c=3;
	plik<<a<<endl;
	plik<<b<<endl;
	plik<<c<<endl;
	cout<<"Eksportowane zmienne to: "<<a<<b<<c<<endl;
	
	
	
	plik.close();
	return 0;
}

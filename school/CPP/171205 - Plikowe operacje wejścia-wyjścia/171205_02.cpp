#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ofstream plik;
	int a, b;
	cout<<"Podaj zmienna a: ";
	cin>>a;
	cout<<"Podaj zmienna b: ";
	cin>>b;
	int c=a+b;
	
	plik.open("E:/Szko�a/C++/171205 - Plikowe operacje wej�cia-wyj�cia/dane1.txt");
	plik<<c<<endl;
	plik.close();
	return 0;
}

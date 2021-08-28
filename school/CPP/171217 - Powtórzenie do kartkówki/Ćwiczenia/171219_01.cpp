#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	string lancuch1, lancuch2;
	ofstream plik1;
	plik1.open("plik1.txt");
	cout<<endl<<"Podaj pierwszy lancuch: ";
	cin>>lancuch1;
	cout<<endl<<"Podaj drugi lancuch: ";
	cin>>lancuch2;
	cout<<lancuch1<<" "<<lancuch2<<endl;
	plik1<<lancuch1<<endl<<lancuch2<<endl;
	
	return 0;
}

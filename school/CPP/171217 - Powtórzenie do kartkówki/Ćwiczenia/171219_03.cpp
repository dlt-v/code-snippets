#include<iostream>
#include<fstream>
#include<string>

using namespace std;

main()
{
	ifstream plik1;
	plik1.open("plik1.txt");
	string lancuch1, lancuch2;
	getline(plik1, lancuch1);
	getline(plik1, lancuch2);
	cout<<lancuch1<<endl<<lancuch2<<endl;
	plik1.close();
	ofstream plik2;
	plik2.open("plik2.txt");
	plik2<<lancuch1<<" "<<lancuch2<<endl;
	
	return 0;
}

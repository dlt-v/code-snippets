#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

main()
{
	ifstream plik2;
	plik2.open("plik2.txt");
	string lancuch1, lancuch2;
	getline(plik2, lancuch1);
	getline(plik2, lancuch2);
	
	cout<<lancuch1<<lancuch2<<endl;
	
	
	return 0;
}

#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ifstream ramka;
	ramka.open("ramka.txt");
	string s1, s2, s3, s4, s5, s6;
	getline(ramka, s1);
	getline(ramka, s2);
	getline(ramka, s3);
	getline(ramka, s4);
	getline(ramka, s5);
	getline(ramka, s6);
	ramka.close();
	return 0;
}

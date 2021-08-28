#include <cstring> 
#include <iostream>

using namespace std;

main()
{
	string s="abcdef", b="bcd";
	cout<<s<<endl<<b<<endl;
	
	bool a=s.empty();
	cout<<a<<endl;
	
	int c=s.size();
	cout<<c<<endl;
	
	char d=s.at(5);
	cout<<d<<endl;
	
	string e=s.substr(3,3);
	cout<<e<<endl;
	
	string f="cde";
	int g=s.find(f);
	cout<<f<<endl;
}

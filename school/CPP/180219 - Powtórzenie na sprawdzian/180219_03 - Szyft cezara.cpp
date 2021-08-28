#include <iostream>
#include <cstring>

using namespace std;

main()
{
	char tab[1001];
	cout<<"Podaj lancuch: ";
	cin>>tab;
	cout<<endl;
	
	int i=0;
	while(tab[i])
	{
		if(tab[i]=='X') tab[i]=='A';
		else if (tab[i]=='Y') tab[i]=='B';
		else if (tab[i]=='Z') tab[i]=='C';
		else if (tab[i]>'X')tab[i]+=3;
		
		
		++i;
	}
	cout<<tab<<end;
	return 0;
}

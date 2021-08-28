#include <iostream>
#include <cstring>
using namespace std;

main()
{
	char tab[1001];
	cout<<"Podaj wyraz skladajacy sie z duzych liter (bez spacji): ";
	cin>>tab;
	cout<<endl;
	int i=0;
	while(tab[i])
	{
		if (tab[i] == 'A') tab[i] = 'X'; else
		if (tab[i] == 'B') tab[i] = 'Y'; else
		if (tab[i] == 'C') tab[i] = 'Z'; else
		if (tab[i] > 'C') tab[i] -= 3;
		++i;
	}
	cout<<"Po zaszyfrowaniu: "<<tab<<endl;
}

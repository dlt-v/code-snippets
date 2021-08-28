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
		if (tab[i] == 'X') tab[i] = 'A'; else
		if (tab[i] == 'Y') tab[i] = 'B'; else
		if (tab[i] == 'Z') tab[i] = 'C'; else
		if (tab[i] < 'X') tab[i] += 3;
		++i;
	}
	cout<<"Po zaszyfrowaniu: "<<tab<<endl;
}

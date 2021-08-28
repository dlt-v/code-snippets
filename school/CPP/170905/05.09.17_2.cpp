#include <cstring>					//Program wyswietla ilosc znakow wprowadzonych do "tab".
#include <iostream>
using namespace std;

int main()
{
	char tab[20];
	cout<<"Dej mnie lancuch"<<endl; //ciag znakow BEZ SPACJI
	cin>>tab;
	
	int z=strlen(tab);
		cout<<"Lancuch sklada sie z "<<z<<" znakow"<<endl;
		
	system("pause");
		
	return 0;
}

#include<iostream>				//program podaje liczbe znak�w w �a�cuchu
#include<cstring>
using namespace std;

int main()
{
	char tab[120];
	cout<<"Podaj lancuch:";
	cin>>tab;
	cout<<endl;
	
	
	int z=strlen(tab);
	cout<<"Lancuch sklada sie z "<<z<<" znakow."<<endl;
	system("pause");
	return 0;
}

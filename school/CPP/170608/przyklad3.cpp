#include<iostream>				//program por�wnuje 2 �a�cuchy i sprawdza kt�ry jest d�u�szy
#include<cstring>
using namespace std;

int main()
{
	char tab1[]="Korzen to cwel";
	char tab2[]="Korzeniewski to cwel";
	
	int ile1=strlen(tab1);
	int	ile2=strlen(tab2);
	
	if(ile1>ile2)
	cout<<"Najwyrazniej korzen to cwel"<<endl;
	else if(ile2>ile1)
	cout<<"Najwyrazniej korzeniewski to cwel"<<endl;
	else
	cout<<"Tak"<<endl;
	
	system("pause");
	return 0;
}

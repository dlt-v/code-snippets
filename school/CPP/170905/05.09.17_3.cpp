#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char tab1[20];
	char tab2[20];
	cout<<"Podaj string1: ";
	cin>>tab1;
	cout<<endl<<"Podaj string2: ";
	cin>>tab2;
	cout<<endl;
	
	int dl1=strlen(tab1), dl2=strlen(tab2);
	
	cout<<endl<<"Pierwsza tablica posiada "<<dl1<<" znaki/ow, za to druga posiada "<<dl2<<" znaki/ow."<<endl;
	
	if(dl1>dl2) cout<<"Tablica 1 jest dluzsza od Tablica 2"<<endl;
	if(dl2>dl1) cout<<"Tablica 2 jest dluzsza od Tablica 1"<<endl;
	if(dl1==dl2) cout<<"Dlugosc tablic jest taka sama"<<endl;
	
	system("pause");
	return 0;
	
}

//bêdzie wczytywal z klawiatury dowolny tekst, a nastepnie zamienial wszystkie literki "a" na gwiazdkê. Utwórz funkcjê czytaj dla wprowadzanego tekstu.
#include <iostream>
#include <cstring>

using namespace std;
char a[0];

Czytaj()
{
	cout<<a<<endl;	
}
//cin.getline(s,256)


int main()
{
	cout<<"Podaj przykladowy lancuch: ";
 	
	cin>>a;

	int c=strlen(a);
	for (int i=0; i<c;i++)
	{
		if (a[i]=='a') a[i]='*';
	}
	Czytaj();
	
system("pause");
return 0;

}

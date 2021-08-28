#include <iostream>
#include <cstring>

using namespace std;
const int MAX=100;
string plotkowy()
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

string kolumnowy()
{
	string tekst;
	int n, klucz[MAX];
	cout<<"Podaj tekst jawny: ";
	cin>>tekst;
	cout<<endl<<"Podaj liczbe kolumn: ";
	cin>>n;
	cout<<endl<<"Kluczem jest permutacja numerow kolumz z zakresu: 0 - "<<n-1<<endl;
		for (int j=0;j<n;j++)
		{
			cout<<"Podaj element klucza nr "<<j+1<<": ";
			cin>>klucz[j];
		}
		cout<<"kryptogram: "<<szyfruj(tekst,klucz,n)<<endl;
		return 0;
}
string szyfruj (string tekst, int klucz[], int n)
{
	string wynik;
	char tablica[MAX][MAX];
	int dl=tekst.size(), m;
	if (dl%n) m=dl/n+1;
	else m=dl/n;
	int k=0;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(k<dl)
			{
				tablica[i][j]=tekst[k];
			k++;
			}
			else tablica[i][j]='\0';
		int l;
		for(int k=0;k<n;k++)
		{
			l=klucz[k];
			for(int i=0;i<m;i++)
				if(tablica[i][l]!='\0') wynik+=tablica[i][l];
		}
		return wynik;
}

kolumnowy()
{
string tekst;
	int n, klucz[MAX];
	cout<<"Podaj tekst jawny: ";
	cin>>tekst;
	cout<<endl<<"Podaj liczbe kolumn: ";
	cin>>n;
	cout<<endl<<"Kluczem jest permutacja numerow kolumz z zakresu: 0 - "<<n-1<<endl;
		for (int j=0;j<n;j++)
		{
			cout<<"Podaj element klucza nr "<<j+1<<": ";
			cin>>klucz[j];
		}
		
			string wynik;
	char tablica[MAX][MAX];
	int dl=tekst.size(), m;
	if (dl%n) m=dl/n+1;
	else m=dl/n;
	int k=0;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(k<dl)
			{
				tablica[i][j]=tekst[k];
			k++;
			}
			else tablica[i][j]='\0';
		int l;
		for(int k=0;k<n;k++)
		{
			l=klucz[k];
			for(int i=0;i<m;i++)
				if(tablica[i][l]!='\0') wynik+=tablica[i][l];
		}
		cout<<"kryptogram: "<<wynik<<endl;
		return 0;
}


main()
{
	cout<<"Który typ szyfrowania chcesz?"<<endl<<"1 - P³otkowy"<<endl<<"2 - schodkowy"<<endl;
	int wybor; cin>>wybor;
	if (wybor==1)
	{
		plotkowy();
	}
	else if (wybor==2)
	{
		kolumnowy();
	}
	else cout<<"Wprowadzono nieprawidlowe dane!"<<endl;
	
	return 0;
}

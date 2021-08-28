#include <iostream> //szyfr płotkowy
#include <cstring>

using namespace std;
const int MAX=100;		//MAX z duzej

string szyfruj(string tekst, int klucz[], int n)		.//string
{
    string wynik;
    char tablica[MAX][MAX];		//tablica
    int dl=tekst.size(), m;
    if (dl%n) m=dl/n+1;
    else m=dl/n;
    int k=0;
    
    for(int i=0;i<m;i++)			//najpierw m pozniej n
    	for(int j=0;j<n;j++)
    		if(k<dl)
    		{
    			tablica[i][j]=tekst[k];
    			k++;					//k++
			}
				else tablica[i][j]='\0';
				
			
				
	int l;
	for(int k=0;k<n;k++)			//tutaj FOR ma {}
		{
			l=klucz[k];
			for (int i=0;i<m;i++)		//najpierw i pozniej l
			if (tablica[i][l]!='\0') wynik+=tablica[i][l];
		}
    
    
    return wynik;
}

main()
{
    string tekst;
    int n, klucz[MAX];
    cout<<"Podaj tekst jawny: ";
    cin>>tekst;
    cout<<endl<<"Podaj liczbe kolumn: ";
    cin>>n;
    cout<<endl<<"Podaj klucz (od 0 do "<<n-1<<"): "<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<"Podaj klucz nr"<<j+1<<": ";
            cin>>klucz[j];
            cout<<endl;
        }
    cout<<"Kryptogram to: "<<szyfruj(tekst,klucz,n)<<endl;
    return 0;
}



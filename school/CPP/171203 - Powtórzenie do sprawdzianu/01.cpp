#include<iostream>
#include<cstring>

using namespace std;

struct szkola
{
    string imie;
    string nazwisko;
    int miesiac_urodzenia;
};

int main()
{
    szkola klasa3Ti[2];
    cout<<"Klasa 3 Ti"<<endl;
    
    for (int i=0;i<2;i++)
    {
        cout<<endl<<"Podaj imie ucznia: ";
        cin>>klasa3Ti[i].imie;
        cout<<endl<<"Podaj nazwisko ucznia: ";
        cin>>klasa3Ti[i].nazwisko;
        cout<<endl<<"Podaj wiek ucznia: ";
        cin>>klasa3Ti[i].miesiac_urodzenia;     
    }
    
    for (int j=0;j<2;j++)
    {
    	cout<<"Uczen nr: "<<j+1<<endl;
    	cout<<klasa3Ti[j].imie<<" "<<klasa3Ti[j].nazwisko<<" "<<klasa3Ti[j].miesiac_urodzenia<<endl;
    	
    	
	}
    return 0;
}

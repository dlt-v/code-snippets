#include<iostream>
#include<cstdlib>


using namespace std;

Podziel (float a, float b)
{			
			float wynik=a/b;
			cout<<a<<":"<<b<<"="<<wynik;
}

Dodaj (float a, float b)
{			
			float wynik=a+b;
			cout<<a<<"+"<<b<<"="<<wynik;
}

Odejmij (float a, float b)
{			
			float wynik=a-b;
			cout<<a<<"-"<<b<<"="<<wynik;
}

Pomnoz (float a, float b)
{			
			float wynik=a*b;
			cout<<a<<"x"<<b<<"="<<wynik;
}
 
int main()
{

float x, y;
	cout<<"Pierwsza liczba :";
	cin>>x;
	cout<<"Druga liczba :";
	cin>>y;
	
	
	if (y==0)cout<<"Nie dzielimy przez zero!"<<endl;
	else
	{
	cout<<"Dodaj - a"<<endl<<"Odejmij - b"<<endl<<"Pomnoz - c"<<endl<<"Podziel - d"<<endl;
	char opcja;
	cin>>opcja;
	
	
	switch(opcja)
	{
		case 'a':
			Dodaj (x,y);
			break;
	
	
		case 'b':
			Odejmij (x,y);
			break;
			
	
		case 'c':
			Pomnoz (x,y);
			break;
		
	
		case 'd':
			Podziel (x,y);
			break;
	}	
}

  return 0;
}

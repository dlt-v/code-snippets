#include<iostream>
#include<cstdlib>


using namespace std;
 
 int a, b ,r;
 
int main()
{
 
  cout<<"Podaj liczbê A: ";
  cin>>a;
  cout<<"Podaj liczbê B: ";
  cin>>b;
 
 while (b!=0) 			//warunek wyjscia z pêtli
	{
		r=a%b;        //Obliczamy reszte dzielenia
		a=b;		 //Przypisujemy b do a
		b=r;         //przypisujemy reszte do b
		
	}
 cout<<"NWD to "<<a<<endl; 
  system("pause");
  return 0;
}

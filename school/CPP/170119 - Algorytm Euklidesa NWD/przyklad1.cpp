#include<iostream>
#include<cstdlib>


using namespace std;
 
 int a, b ,r, e, w;
 
int main()
{
 
  cout<<"Podaj liczbê A: ";
  cin>>a;
  cout<<"Podaj liczbê B: ";
  cin>>b;
 	e=a;
 	w=b;
 while (b!=0) 			//warunek wyjscia z pêtli
	{
		r=a%b;        //Obliczamy reszte dzielenia
		a=b;		 //Przypisujemy b do a
		b=r;         //przypisujemy reszte do b
		
	}
 
 	
 cout<<"NWW to "<<(e*w)/a<<endl;
  return 0;
}

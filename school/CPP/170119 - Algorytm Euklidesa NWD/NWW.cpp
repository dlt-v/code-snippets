#include<iostream>
#include<cstdlib>


using namespace std;
 
 int a, b ,r, e, w;
 
int main()
{
 
  cout<<"Podaj liczb� A: ";
  cin>>a;
  cout<<"Podaj liczb� B: ";
  cin>>b;
 	e=a;
 	w=b;
 while (b!=0) 			//warunek wyjscia z p�tli
	{
		r=a%b;        //Obliczamy reszte dzielenia
		a=b;		 //Przypisujemy b do a
		b=r;         //przypisujemy reszte do b
		
	}
 
 	
 cout<<"NWW to "<<(e*w)/a<<endl;
  return 0;
}

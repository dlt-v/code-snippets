#include<iostream>
#include<cstdlib>


using namespace std;
 
 int a, b ,r;
 
int main()
{
 
  cout<<"Podaj liczb� A: ";
  cin>>a;
  cout<<"Podaj liczb� B: ";
  cin>>b;
 
 while (b!=0) 			//warunek wyjscia z p�tli
	{
		r=a%b;        //Obliczamy reszte dzielenia
		a=b;		 //Przypisujemy b do a
		b=r;         //przypisujemy reszte do b
		
	}
 cout<<"NWD to "<<a<<endl; 
  system("pause");
  return 0;
}

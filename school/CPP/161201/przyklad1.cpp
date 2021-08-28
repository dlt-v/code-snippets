#include<iostream>
#include<cstdlib>


using namespace std;
 
 float a, b ,c;
 
int main()
{
 
  cout<<"Podaj liczbê A: ";
  cin>>a;
  cout<<"Podaj liczbê B: ";
  cin>>b;
 
 while (b!=0)
	{
		r=a%b;
		a=b;
		b=r;
		
	}
 cout<<"NWD to "<<a; 
  system("pause");
  return 0;
}

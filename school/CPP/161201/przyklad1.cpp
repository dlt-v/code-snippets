#include<iostream>
#include<cstdlib>


using namespace std;
 
 float a, b ,c;
 
int main()
{
 
  cout<<"Podaj liczb� A: ";
  cin>>a;
  cout<<"Podaj liczb� B: ";
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

#include<iostream>
#include<cstdlib>


using namespace std;

NWD (float a, float b)
{			
		while (a!=b)
			if(a>b) 
			a=a-b;
			else b=b-a;
			cout<<"NWD to:"<<a<<endl;
}


 
int main()
{

float x, y;
	cout<<"Pierwsza liczba :";
	cin>>x;
	cout<<"Druga liczba :";
	cin>>y;
	
	
	NWD (x,y);
	

  return 0;
}

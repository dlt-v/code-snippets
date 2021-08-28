#include<iostream>
using namespace std;





TROJKAT(float x, float y)
	{
		if((x>0)&&(y>0))cout<<"Dane poprawne,"<<endl<<"pole rowna sie: "<<(x*y)/2<<endl;
		else cout<<"Blad! Niepoprawne dane!"<<endl; 
	}
	
int main()
{
	float a, h;
	cout<<"Podaj wysokosc trojkata: ";
	cin>>h;
	cout<<"Podaj dlugosc boku: ";
	cin>>a;
	
	TROJKAT(a,h);
	
	return 0;
}

#include <iostream>
using namespace std;

float oblicz(float a, float b)
{
	return a+b;
}

float oblicz(float a)
{
	return a*a;

}

int main()
{
	float x,y;
	char z;
	cout<<"Podaj dzialanie"<<endl;
	cout<<"S - suma"<<endl;
	cout<<"P - potega"<<endl;
	cout<<"No dej cos: ";
	cin>>z;
	
	
	
	switch(z)
	{
	
	case 's':
		cout<<"Podaj x: "; cin>>x;
		cout<<"Podaj y: "; cin>>y;
		cout<<"Suma to "<<oblicz(x,y)<<endl; break;
		
	case 'p':
		cout<<"Podaj x: "; cin>>x;
		cout<<"Potega to "<<oblicz(x)<<endl; break;
		default: cout<<"Zla opcja!"<<endl;
	}
	cin.get();
}

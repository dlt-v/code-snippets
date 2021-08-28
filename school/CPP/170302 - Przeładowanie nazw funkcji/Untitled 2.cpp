#include <iostream>
using namespace std;

float oblicz(float a)     //Pole kwadratu
{
	return a*a;
}

float oblicz(float a, float b)    //Pole trojkota
{
	return (a*b)/2;

}
float oblicz(int c)   //Pole ko³a
{
	return (c*c)*3.14;
}

int main()
{
	float x,y;
	int z;
	cout<<"Podaj dzialanie"<<endl;
	cout<<"1 - pole kwadratu"<<endl;
	cout<<"2 - pole trojkota"<<endl;
	cout<<"3 - pole kola"<<endl;
	cout<<"No dej cos: ";
	cin>>z;
	
	
	float a, b;
	int c;
	
	
	switch(z)
	{
	
	case 1:
		cout<<"Podaj bok a: "; cin>>x;
		cout<<"Pole kwadratu to: "<<oblicz(x)<<endl;
		break;
	case 2:
		cout<<"Podaj bok a:"; cin>>x;
		cout<<"Podaj wysokosc: "; cin>>y;
		cout<<"Pole trojkata to: "<<oblicz(x,y)<<endl;
		break;
	case 3:
		cout<<"Podaj promien kola: ";cin>>c;
		cout<<"Pole kola to: "<<oblicz(c)<<endl;
		break;
	default: cout<<"Zle dane!"<<endl;
	}
	cin.get();
}

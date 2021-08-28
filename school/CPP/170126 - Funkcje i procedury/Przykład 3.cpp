#include<iostream>


using namespace std;
Podziel (float a, float b)
{			
			float wynik=a/b;
			cout<<a<<":"<<b<<"="<<wynik;
}
int main()
{
	float x;
	cout<<"dej pierwsza liste :";
	cin>>x;
	float y;
	cout<<"daj druga liczbe ";
	cin>>y;
	if (y==0&&x==0) cout<<"Nie dzielimy przez 0!";
	if (y==0) cout<<"Nie dzielimy przez 0!";
	if (x==0) cout<<"Nie dzielimy przez 0!";
	else Podziel (x,y);
	
	
	

	cin.get();

return.0;
}

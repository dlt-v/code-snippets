#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a, b, c;
	cout<<"Podaj a"<< endl;
	cin>>a;
	cout<<"Podaj B"<< endl;
	cin>>b;
	cout<<"Podaj C"<< endl;
	cin>>c;
	if (a>b&&a>c) cout<<"Najwieksza a - "<<a;
	if (b>a&&b>c) cout<<"Najwieêksza b - "<<b;
	if (c>b&&c>a) cout<<"Najwieksza c - "<<c;
	else  cout<<"som rownem",
 
	
	cin.get();
		return 0;
}

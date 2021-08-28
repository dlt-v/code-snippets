#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a, b, y;
	cout<<"Podaj a"<< endl;
	cin>>a;
	cout<<"Podaj B"<< endl;
	cin>>b;
	if (a<=0) cout<<"Bledne dane, ";
	if (b==0) cout<<"Bledne dane";
	if (b>0) cout<<"Brawo, obliczam...   "<<sqrt(a)/(b-1);
 
	
	cin.get();
		return 0;
}

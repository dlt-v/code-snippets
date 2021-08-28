#include <iostream>
using namespace std;
int main ()
{
	int a, b, wynik;
	cout<<"dej no A: ";
	cin>>a;
	cout<<"dej no B: ";
	cin >>b;
	if (b=0) cout<<"nie dzielim przez zeró";
	else wynik=a/b, cout<<"wynik to"<<wynik;
	
	cin.get();
	return 0;
}

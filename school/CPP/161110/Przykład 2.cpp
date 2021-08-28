#include <iostream>
using namespace std;
int main ()
{
	float a, b, wynik, pole;
	cout<<"dej no A: ";
	cin>>a;
	cout<<"dej no B: ";
	cin >>b;
	if (b==0) cout<<"nie dzielim przez zero";
	else wynik=a/b, cout<<"wynik to: "<<wynik;
	
	
	cin.get();
	return 0;
}

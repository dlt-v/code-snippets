#include <iostream>
using namespace std;
int main ()
{
	float a, b, c;
	cout<<"czy morzna zbudowac trujkont? "<< endl;
	cout<<"dej no bok A: ";
	cin>>a;
	cout<<"dej no drugi bok: ";
	cin >>b;
	cout<<"dej no czeci bok: ";
	cin >>c;
	if (a+b>c&&c+b>a&&a+c>b) cout<<"a morzna";
	else  cout<<"a nie morzna";
	
	
	cin.get();
	return 0;
}

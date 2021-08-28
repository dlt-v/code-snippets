#include <iostream>

using namespace std;

int a, b;

int main()
{
b=0;
do
{
	
	cout<<"dej no liczby"<<endl;
	cin>>a;
	if (a>0) b=b+a;
	cout<<endl;
	
}
while(a>0);
cout<<"dzienx "<<b;
return 0;
}

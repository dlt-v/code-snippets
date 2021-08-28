#include <iostream>

using namespace std;

main()
{
	int n,p;
	cout<<"Podaj liczbe elementow ciagu:";
	cin>>n;
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		p+=i;
		cout<<p<<endl;
	}
}

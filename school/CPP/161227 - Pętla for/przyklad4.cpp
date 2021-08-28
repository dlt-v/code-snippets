#include<iostream>

using namespace std;

int a, b;

int main()
{
	cout<<"podaj wiersze"<<endl;
	cin>>a;
	cout<<"podaj kolumny"<<endl;
	cin>>b;
	
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=b; j++)
		
			if (j==1)
			{
			cout<<" ";
			cout<<endl;
			}
			if (j==b)
			{
			cout<<" ";
			cout<<endl;
			}
			else 
			{
			cout<<"*";
			cout<<endl;
			}
		
		
	}
	

	
	system("PAUSE");
}

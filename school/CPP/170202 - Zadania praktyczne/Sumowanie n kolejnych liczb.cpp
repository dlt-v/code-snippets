#include<iostream>
#include<cstdlib>


using namespace std;
float n;

Sumowanie (float s=0 )
{			
		for (int i; i<n;i++)
		{
			s=s+i;
		}
		
		cout<<"Suma = "<<s<<endl;
}


 
int main()
{

	cout<<"Pierwsza liczbe cyfr :";
	cin>>n;
	
	
	Sumowanie (n);
	

  return 0;
}

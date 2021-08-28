#include<iostream>
#include<cstdlib>

int tak;
using namespace std;

PierwszaFunkcja()
{			
			cout<<" duzy ? ";
			cin>>tak;
			cout<<endl;
			
			
			for (int i=0;i<tak;i++)
			{
				
				
				if (i=1)cout<<"  x  "<<endl;
				if (i=2)cout<<" xxx "<<endl;
				if (i=3)cout<<"xxxxx"<<endl;
				
			}
}
 
main()
{
	PierwszaFunkcja();
	cin.get();

}

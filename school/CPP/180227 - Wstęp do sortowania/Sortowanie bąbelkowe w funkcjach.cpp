#include <iostream>
using namespace std;


double Wprowadz()
{
	double T[100], pom;
	int n;
	 cout<<"Podaj liczbe elementow tablicy: ";
	 cin>>n;
	 cout<<"Podaj elementy tablicy:"<<endl;
	 for (int i=0;i<n;i++)
	 {
	 	cout<<"T["<<i<<"] = ";
	 	cin>>T[i];
	 }
	 cout<<"Wczytana tablica:"<<endl;
	 for (int i=0;i<n;i++) cout<<T[i]<<"\t";
	 cout<<endl;
	
	
	return T[100];
}







main()
{
	double T[100]=Wprowadz();
	
	 
	 for (int j=n-1;j>0;j--)
	 	for(int i=0; i<j;i++)
	 		if(T[i]>T[i+1])
	 		{
	 			pom=T[i];
	 			T[i]=T[i+1];
	 			T[i+1]=pom;
			 }
			 
	cout<<"Posortowana tablica:"<<endl;
	for (int i=0;i<n;i++) cout<<T[i]<<"\t";
	cout<<endl;
	return 0;
}

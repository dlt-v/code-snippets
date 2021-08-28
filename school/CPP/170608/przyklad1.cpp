#include<iostream> 									//program kompiuje 5 znaków z jednej tablicy do drugiej
#include<iomanip>
#include<cstdlib>						//strncpy
#include<cstring> 									//nowa biblioteka!

using namespace std;

int main()
{
	char Tablica1[]="123456789"; 			//spacja to te¿ znak!
	char Tablica2[6];
	
	strncpy(Tablica2,Tablica1,5);
	cout<<Tablica2<<endl<<Tablica1<<endl;
	system("pause");									//to coœ nowego
	return 0;
}

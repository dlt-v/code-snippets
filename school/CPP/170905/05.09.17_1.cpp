#include <iostream>  //Program kopiuje zawarto�� "zTablicy" do "doTablicy" i wy�wietla go.
#include <cstring>
using namespace std;

int main ()
{
	char zTablicy[] = "Ala ma kota";
	char doTablicy[10];
	
	strncpy(doTablicy,zTablicy,10);
	
	cout<<doTablicy<<endl<<zTablicy<<endl;
	
	system("pause");
	return 0;
}

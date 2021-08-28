#include <iostream>  //Program kopiuje zawartoœæ "zTablicy" do "doTablicy" i wyœwietla go.
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

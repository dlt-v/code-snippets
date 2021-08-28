#include <iostream>
#include <cstring>

using namespace std;




int main()
{
string a="Ala ma kota";
char b[256];
int c=a.size();
cout<<a<<endl;

strcpy(b,a.c_str());
cout<<b;

return 0;	
}

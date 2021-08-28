//program zwraca ci¹g wybranych znaków z "informatyka"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
string s="informatyka";
string a=s.substr(2,3);
cout<<a<<endl;

system ("pause");
return 0;
}

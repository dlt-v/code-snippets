#include <iostream> //zamien litery na *
#include <cstring>

using namespace std;




int main()
{
	
string lancuch="aouogboip308253u9hg573";

int a=lancuch.size();

for(int i=0;i<a;i++)
{
	if(isalpha(lancuch[i])) lancuch[i]='*';	
}

cout<<lancuch;
return 0;	
}

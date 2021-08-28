#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s="ab12c3d4ef56";
	
	cout<<s<<endl;
	for (int i=0;i<s.size();i++)
		{
			if (isalpha(s[i])) cout<<s[i];		}
}

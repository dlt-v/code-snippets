#include <cstring>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include<unistd.h>




using namespace std;

int main()
{
char s[]="abcdef";
int a=strlen(s);

cout<<a<<endl;

strcat(s,"nowy");
cout<<s<<endl;
}

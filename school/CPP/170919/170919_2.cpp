//napisz program kt�ry zlicza ilo�� znak�w w napisie, a nast�pnie je�eli liczba znak�w jest parzysta - czy�ci go.
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string a="dowolnytekst";
	int b=a.size();
	cout<<"String A ma "<<b<<" znakow"<<endl;
	int c=2;
		if(b%c==0) {
		cout<<"Czyszcze..."<<endl; a.clear();}
		
		else cout<<"Liczba jest nieparzysta..."<<endl;
		
	
	
	
	
	
}

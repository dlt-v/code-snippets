//program kt�ry w zale�no�ci od wybranej opcji b�dzi� wykonywa� okre�lon� funkcj� (z trzech) na �a�cuchu dla podanego wcze�niej napisu
using namespace std;
#include <iostream>
#include <cstring>

int main()
{
	cout<<"Witaj,"<<endl<<"podaj lancuch :";
	string lancuch;
	string c;
	cin>>lancuch;
	cout<<"Twoj lancuch to '"<<lancuch<<"'."<<endl<<endl;
	
	cout<<"Menu: "<<endl<<"1 - sprawdz dlugosc lancucha"<<endl<<"2 - wyczytaj wybrany znak z lancucha"<<endl<<"3 - wyczytaj wybrany podciag znakow"<<endl;
	int wybor;
	cin>>wybor;
	
	switch(wybor)
	{
	int a,b;

	case 1: 
		cout<<"Wybrales opcje '1',"<<endl; 
		a=lancuch.size(); 
		cout<<"Dlugosc lancucha wynosi: "<<a<<endl; 
	break;

	case 2: cout<<"Wybrales opcje '2',"<<endl<<"Ktory znak chcesz wyczytac? "; 
		cin>>a; 
		a=a+1; 
		b=lancuch.at(a); 
		cout<<"Wybrany znak to: "<<b<<endl;
	break;
	
	case 3: 
		cout<<"Wybrales opcje '3',"<<endl<<"Ile znakow chcesz wyczytac? "; 
		cin>>a; 
		cout<<"Od ktorego znaku chcesz zaczac?"<<endl; 
		cin>>b; 
		b=b+1; 
		c=lancuch.substr(b,a); 
		cout<<"Wybrany ciag znakow to: "<<c<<endl;
	break;

	default: 
		cout<<"Nie ma takiej opcji"<<endl;
	break;
}
cout<<"Koniec zadania"<<endl;
system ("pause");
return 0;
}

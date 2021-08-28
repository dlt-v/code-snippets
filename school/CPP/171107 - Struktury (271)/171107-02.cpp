#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;

struct adres
{
	char miasto[30];
	char ulica[30];
	char numer_domu[10];
	int numer_mieszkania;
} Kwiatkowski;


int main()
{
	adres Nowak={"Warszawa","Grochowska","12C",34};
	cout<<Nowak.miasto;
}

#include<iostream>
#include<cstring>

using namespace std;

struct szkola
{
    string imie;
    string nazwisko;
    int miesiac_urodzenia;
};

int main()
{

szkola nauczyciel={"pawel","nazwisko",17};

cout<<nauczyciel.imie<<nauczyciel.nazwisko<<nauczyciel.miesiac_urodzenia<<endl;
    return 0;
}

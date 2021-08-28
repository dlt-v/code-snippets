#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream plik;
	plik.open("plik.txt");
    int pion, poziom;
    
    cout << "ile w pionie ? :";
    cin >> pion;
    cout << endl;
    cout << "ile w poziomie ? :";
    cin >> poziom;
    cout << endl;
    
    for( int i = 0; i < pion; i++ )
    {
        for( int j = 0; j <= i; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    plik.close();
    cin.sync();
    return 0;
}

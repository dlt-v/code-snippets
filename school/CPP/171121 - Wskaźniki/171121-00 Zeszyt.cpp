Wskaznik - typ zmiennej odpowiedzialnej za przechowywanie adresu do innej zmiennej (innego miejsca w pami�ci) w obr�bie naszej aplikacji.

Wskaznik moze wskazywac na jakas zmienn�, struktur�, tablic� a nawet funkcj�. Oto podstawowe operatory niezb�dne do operowania wska�nikami:
	* - operator wy�uskania warto�ci zmiennej, na kt�ra wskazuje wska�nik (wyci�ga warto�� ze wska�nika)
	& - operator pobrania adresu danej zmiennej, tablicy, struktury itp. (pobiera adres zmiennej)
	
Zmienna wska�nikokwa (czyli wska�nik) poprzedzona jest gwiazdk� (*) i przechowuje adres pami�ci (a ie warto��) zmiennej, na kt�r� wskazuje.
	
Deklaruj�c wska�nik post�pujemy tak jak ze zwyk�ymi zmiennymi, jednak nazw� wska�nika poprzedzamy gwiazdk�. 
	UWAGA! Gwiazdka przed nazw� wska�nika nie ma zwi�zku z operatore wy�uskania!

	int telefon=123456;			//zmienna liczbowa
	int *wsk = &telefon; 	//wska�nik wsk zawiera adres zmiennej telefon
	
	cout<<*wsk<<endl;		//wyswietlanie wyluskanej wartosci wskaznika (123456)
	cout<<wsk<<endl;		//wyswietlanie adresu zmiennej telefon
	cout << &wsk << endl;       //wy�wietlenie adresu wska�nika
	cout << &telefon << endl;   //wy�wietlenie adresu zmiennej telefo
	
Tak wygl�da tworzenie wska�nika. Utworzone zmienne s� puste. Zmienna telefon nie zawiera �adnej warto�ci, a wska�nnik wsk nie skazuje �adnej
warto�ci.
!Bardzo wa�ne jest aby nie korzysta� ze ska�nika kt�ry nie wskazuje na �adn� zmienn�! Prowadzi to zawsze do b��d�w.

Za pomoc� operatora pobrania adresu (&) pobrano adres zmiennej telefon. Adres zmiennej zosta� przypisany wska�nikowi wsk. Pami�taj �e gwiazdka 
przed nazw� wska�nika to nie operator wy�uskania! Chc�c wy�iwetli� swarto�� wska�nika pos�u�ymy si� operatorem wy�uskania czyli gwiazdk� (*).
	

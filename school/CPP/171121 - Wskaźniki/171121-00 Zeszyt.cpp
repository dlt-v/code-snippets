Wskaznik - typ zmiennej odpowiedzialnej za przechowywanie adresu do innej zmiennej (innego miejsca w pamiêci) w obrêbie naszej aplikacji.

Wskaznik moze wskazywac na jakas zmienn¹, strukturê, tablicê a nawet funkcjê. Oto podstawowe operatory niezbêdne do operowania wskaŸnikami:
	* - operator wy³uskania wartoœci zmiennej, na która wskazuje wskaŸnik (wyci¹ga wartoœæ ze wskaŸnika)
	& - operator pobrania adresu danej zmiennej, tablicy, struktury itp. (pobiera adres zmiennej)
	
Zmienna wskaŸnikokwa (czyli wskaŸnik) poprzedzona jest gwiazdk¹ (*) i przechowuje adres pamiêci (a ie wartoœæ) zmiennej, na któr¹ wskazuje.
	
Deklaruj¹c wskaŸnik postêpujemy tak jak ze zwyk³ymi zmiennymi, jednak nazwê wskaŸnika poprzedzamy gwiazdk¹. 
	UWAGA! Gwiazdka przed nazw¹ wskaŸnika nie ma zwi¹zku z operatore wy³uskania!

	int telefon=123456;			//zmienna liczbowa
	int *wsk = &telefon; 	//wskaŸnik wsk zawiera adres zmiennej telefon
	
	cout<<*wsk<<endl;		//wyswietlanie wyluskanej wartosci wskaznika (123456)
	cout<<wsk<<endl;		//wyswietlanie adresu zmiennej telefon
	cout << &wsk << endl;       //wyœwietlenie adresu wskaŸnika
	cout << &telefon << endl;   //wyœwietlenie adresu zmiennej telefo
	
Tak wygl¹da tworzenie wskaŸnika. Utworzone zmienne s¹ puste. Zmienna telefon nie zawiera ¿adnej wartoœci, a wskaŸnnik wsk nie skazuje ¿adnej
wartoœci.
!Bardzo wa¿ne jest aby nie korzystaæ ze skaŸnika który nie wskazuje na ¿adn¹ zmienn¹! Prowadzi to zawsze do b³êdów.

Za pomoc¹ operatora pobrania adresu (&) pobrano adres zmiennej telefon. Adres zmiennej zosta³ przypisany wskaŸnikowi wsk. Pamiêtaj ¿e gwiazdka 
przed nazw¹ wskaŸnika to nie operator wy³uskania! Chc¹c wyœiwetliæ swartoœæ wskaŸnika pos³u¿ymy siê operatorem wy³uskania czyli gwiazdk¹ (*).
	

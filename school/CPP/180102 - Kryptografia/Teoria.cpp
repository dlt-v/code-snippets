Podstawowe poj�cia:
	Szyfrogram - jest to zaszyfrowana wiadomo��
	Tekst jawny - ooryginalna wiadomo��
	Szyfrowanie symetryczne - do szyfrowania i deszyfrowania wykorzystywany jest taki sam klucz
	Kryptografia - dziedzina zajmuj�ca si� zabezpieczaniem dancyh
	ktryptoanaliza - dziedzina badaj�ca algorytmy szyfruj�ce pod k�tem bezpiecze�stwa, sprawdza na ile bezpieczny jest dany szyfr oraz czy da si� go z�ama� bez znajomo�ci klucza
	
	Algorytmy przestawieniowe
		Zmina kolejno�ci znak�w w tek�cie jawnym dokonuje si� za pomoc� okre�lonej konstrukcji
		Najpierw tekst jawny wpisuje si� do tablicy (�cie�ka zapisu), nast�pnie odczytuje si� go w ustalonym porz�dku, otrzymuj�c szyfrogram (scie�ka odczytu).
		Szyfr przestawieniowy charakteryzuje si� tym, �e w tek�cie zaszyfrowanym wyst�puj� wszystkie znaki tekstu szyfrowanego (jawnego), ale s� one poprzestawiane wed�ug �ci�le okre�lanego schematu.
		
	Przestawienie kolumnowe
		Metoda ta wykorzystuje tablic� dwuwymiarow�.
		test jawny wprowadzany jest znak po znaku do kolejych wierszy tablicy, pomijaj�c spacj�.
		Kluczem jest permutacja (zmiana kolejno�ci) numer�w kolumn Tekst zaszyfrowan odczytuje si� kolumnami w kolejnop�ci zgodnej z podanym kluczem.	
		
	Przyk�ad
		Zaszyfruj s�owo KRYPTOANALIZA
		Stosujemy tablic� dwuwymiarow� zawieraj�c� 5 kolumn oraz klucz: 2, 1, 4, 0 3
		Po wprowadzeniu tekstu jawnego do tablicy otrzymujemy
		
		K R Y P T
		O A N A L
		I Z A
		
		Po odczytaniu szyfrogramu otrzymujemy:
		YNARAZTLKOIPA
		
	ZAD 1
		zaszyfruj tekst "Klasa informatyczna" z kluczem "4, 0 ,1, 3, 2"
		
		K L A S A
		I N F O R
		M A T Y C
		Z N A				odpowied� to: ARCKIMZLNANSOYAFTA
		
	ZAD 2
		zaszyfruj metod� kolumnow� �a�cuch "Uczciwo�� zbiera pochwa�y i umiera z zimna" z kluczem 3, 2, 0 ,1
		
		U C Z C
		I W O �
		� Z B I
		E R A P
		O C H W
		A � Y I
		U M I E
		R A Z Z
		I M N A
					odpowied� to C�IPWIEZA-ZOBAHYIZN-UI�EOAURI-CWZRC�MAM (bez my�lnik�w)
					
	ZAD 3 
		zaszyfruj swoje imie i nazwisko dowolnym kluczem
		
		T O M A S Z M I C H A L S K I
		klucz to: 0,1,2,3,4,5,6,7,8,9,10,11,12,13, 14
		odpowiedz to: TOMASZMICHALSKI
		
	2 0 1 odszyfruj  AWYKWIA PCSSOYE RAZTZCZ
	
	P R A
	C A W
	S Z Y
	S T K
	O Z W
	Y C I
	E Z A  odpowied� to: PRACA WSZYSTKO ZWYCIEZA
	1 2 3 4 5 6 7 8 91011121314151617181920212223242526
	O G � L N I E N I E W I E M P O C O T O R O B I M Y
	A L E S P O K O M O G E T O R O B I � C A L Y D Z I
	E N A L E N I E W I E M C Z Y B E D Z I E M I S I E  25
	C H C I A L O
	
	25 12 1 20 3 24 14 22 4 5 6						 19   8   9   23 16   10  11   0   13  15  7   17  18   2   21  
	
	YIE ETC GLNH RAE LSLI MZI PRY BYI NPEA IONL EKIO OCI IMW EOI IDS CBE WGE IEM OAEC MOZ OOB NOE OID  TƏ �EAC  OLM
	
	
	

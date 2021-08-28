Polega na u�ywaniu zestaw�w dwu lub wi�cej powi�zanych ze sob� kluczy, umo�liwiaj�cych
wykonywanie r�nych czynno�ci kryptograficznych.

Jeden z kluczy mo�e by� udost�pniony publicznie bez utraty bezpiecze�stwa danych 
zabezpieczanych tym kryptosystemem.

Kryptografia asymetryczna
Najwa�niejsze zastosowania krypografii asymetrycznej.
- szyfrowanie
- podpis cyfrowy

Zak�adaj� istnienie kluczy:
prywatnego i publicznego, przy czym klucza prywatnego nie da si� �atwo odtworzy�
na podstawie publicznego.
W niekt�rych innych zastosowaniach kluczy mo�e by� wi�cej.

Poj�cie podpisu cyfrowego (digital signature) zosta�o zdefiniowane
przez norm� ISO 7498-2:1989 jako �dane do��czone do
danych lub ich przekszta�cenie kryptograficzne, kt�re pozwala
odbiorcy danych udowodni� pochodzenie danych i zabezpieczy�
je przed fa�szerstwem�. Podpis cyfrowy jest poj�ciem
szerszym ni� podpis elektroniczny. Podpis cyfrowy nie musi
by� generowany przez cz�owieka, do tej kategorii zalicza si� np.
zastosowania matematycznej operacji �podpisywania cyfrowego�
wykorzystywane np. w protoko�ach kryptograficznych, kt�re
�podpisuj�� np. tymczasowe liczby losowe w celu potwierdzenia
posiadania klucza prywatnego.
 
Podstawow� cech� uniemo�liwiaj�c� zastosowanie w procedurze
podpisu elektronicznego szyfrowania symetrycznego (z jednym
kluczem) jest to, �e klucz musi by� przekazany odbiorcy
przez nadawc� informacji. Po co szyfrowa� wiadomo��, je�eli
klucz do jej odszyfrowania mo�e by� przej�ty przez osoby trzecie?
Dlatego do szyfrowania wykorzystuje si� algorytmy symetryczne
z dwoma kluczami: publicznym, jawnym i zale�nym od
niego kluczem prywatnym. Pierwszy z nich s�u�y do szyfrowania
wiadomo�ci przeznaczonych dla w�a�ciciela kluczy. Klucz prywatny
jest tajny i tylko przy jego pomocy mo�na odszyfrowa� to, co
zosta�o zakodowane kluczem publicznym. Najszerzej stosowanym
algorytmem szyfrowania asymetrycznego jest RSA (Rivest,
Shamir, Adleman), przedstawiony bardziej szczeg�owo w [1].
System kryptograficzny z kluczem publicznym i prywatnym
mo�e by� wykorzystywany do podpisywania dokument�w cyfrowych.
Jednak w tym przypadku rola kluczy zostaje odwr�-
cona. Poniewa� klucz prywatny przechowywany jest wy��cznie
u podpisuj�cego, s�u�y on do szyfrowania danych. Klucz publiczny,
og�lnie dost�pny, s�u�y do deszyfrowania i upewnienia
si�, czy tylko w�a�ciciel skorzysta� z klucza prywatnego. Nadawca
szyfruje dokument u�ywaj�c swojego klucza prywatnego.
Odbiorca deszyfruje dokument u�ywaj�c klucza publicznego
nadawcy weryfikuj�c w ten spos�b jego podpis. Podpis ten
jest prawdziwy, gdy� zosta� zweryfikowany przez u�ycie klucza
publicznego nadawcy; podpis nie mo�e by� sfa�szowany, gdy�
tylko nadawca zna sw�j klucz prywatny. Podpisany dokument
nie mo�e by� zmieniony, gdy� zmieniony dokument nie da si�
rozszyfrowa� kluczem publicznym nadawcy.
Wad� takiego sposobu podpisywania dokument�w jest to,
�e podpis jest co najmniej tak d�ugi, jak sam dokument, co
uniemo�liwia praktyczne zastosowanie tej, jednak wymagaj�cej
du�ych mocy obliczeniowych, procedury. Dlatego stosuje
si� procedur� z wykorzy

Strona uwierzytelnienia wylicza skr�t (hash) podpisywanej wiadomo�ci. Nast�pnie
szyfruje ten skr�t woim kluczem prywatnym i jako podpis cyfrowy do��cza do 
oryginalnej wiadomo�ci. Dowolna osoba posiadaj�ca klucz publiczny mo�e sprawdzi�
autentycznoi�� podpisu, poprzez odszyfrowanie skr�tu za pomoc� klucza publicznego 
nadawcyu i por�wnanie go z w�asnor�cznie wyliczonym na podstawie wiadomo�ci.s

Klucz publiczny u�ywany jest do zaszyfrowania informacji, klucz prywatny do jej
odczytu . Poniewa� klucz prywatny jest wy��cznym posiadaniu adresata informacji,
tylko on mo�e j� odczyta�.
Klucz publiczny jest udost�pniony ka�demu, kto zechce zaszyfrowa� wiadomo��.

Algorytm RSA - jeden z pierwszych i obecnie najpopularniejszych asymetrycznych
algorytm�w kryptograficznych z kluczem publicznym, zaprojektowany w 1977 przez Rona Rivesta,
Adi Szamira oraz Leonarda Adlemana.
Pierwszy algorytm, kt�ry mo�e by� stosowany zar�wno do szyfrowania jak i do podpis�w cyfrowych.

Bezpiecze�stwo szyfrowania opiera si� na trudno�ci faktoryzacji du�ych liczb
z�o�onych. Jego nazwa pochodzi od pierwszych liter nazwisko jego tw�rc�w.

Rozk�ad na czynniki = faktoryzacjia.

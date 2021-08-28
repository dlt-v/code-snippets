Polega na u¿ywaniu zestawów dwu lub wiêcej powi¹zanych ze sob¹ kluczy, umo¿liwiaj¹cych
wykonywanie ró¿nych czynnoœci kryptograficznych.

Jeden z kluczy mo¿e byæ udostêpniony publicznie bez utraty bezpieczeñstwa danych 
zabezpieczanych tym kryptosystemem.

Kryptografia asymetryczna
Najwa¿niejsze zastosowania krypografii asymetrycznej.
- szyfrowanie
- podpis cyfrowy

Zak³adaj¹ istnienie kluczy:
prywatnego i publicznego, przy czym klucza prywatnego nie da siê ³atwo odtworzyæ
na podstawie publicznego.
W niektórych innych zastosowaniach kluczy mo¿e byæ wiêcej.

Pojêcie podpisu cyfrowego (digital signature) zosta³o zdefiniowane
przez normê ISO 7498-2:1989 jako „dane do³¹czone do
danych lub ich przekszta³cenie kryptograficzne, które pozwala
odbiorcy danych udowodniæ pochodzenie danych i zabezpieczyæ
je przed fa³szerstwem”. Podpis cyfrowy jest pojêciem
szerszym ni¿ podpis elektroniczny. Podpis cyfrowy nie musi
byæ generowany przez cz³owieka, do tej kategorii zalicza siê np.
zastosowania matematycznej operacji „podpisywania cyfrowego”
wykorzystywane np. w protoko³ach kryptograficznych, które
„podpisuj¹” np. tymczasowe liczby losowe w celu potwierdzenia
posiadania klucza prywatnego.
 
Podstawow¹ cech¹ uniemo¿liwiaj¹c¹ zastosowanie w procedurze
podpisu elektronicznego szyfrowania symetrycznego (z jednym
kluczem) jest to, ¿e klucz musi byæ przekazany odbiorcy
przez nadawcê informacji. Po co szyfrowaæ wiadomoœæ, je¿eli
klucz do jej odszyfrowania mo¿e byæ przejêty przez osoby trzecie?
Dlatego do szyfrowania wykorzystuje siê algorytmy symetryczne
z dwoma kluczami: publicznym, jawnym i zale¿nym od
niego kluczem prywatnym. Pierwszy z nich s³u¿y do szyfrowania
wiadomoœci przeznaczonych dla w³aœciciela kluczy. Klucz prywatny
jest tajny i tylko przy jego pomocy mo¿na odszyfrowaæ to, co
zosta³o zakodowane kluczem publicznym. Najszerzej stosowanym
algorytmem szyfrowania asymetrycznego jest RSA (Rivest,
Shamir, Adleman), przedstawiony bardziej szczegó³owo w [1].
System kryptograficzny z kluczem publicznym i prywatnym
mo¿e byæ wykorzystywany do podpisywania dokumentów cyfrowych.
Jednak w tym przypadku rola kluczy zostaje odwró-
cona. Poniewa¿ klucz prywatny przechowywany jest wy³¹cznie
u podpisuj¹cego, s³u¿y on do szyfrowania danych. Klucz publiczny,
ogólnie dostêpny, s³u¿y do deszyfrowania i upewnienia
siê, czy tylko w³aœciciel skorzysta³ z klucza prywatnego. Nadawca
szyfruje dokument u¿ywaj¹c swojego klucza prywatnego.
Odbiorca deszyfruje dokument u¿ywaj¹c klucza publicznego
nadawcy weryfikuj¹c w ten sposób jego podpis. Podpis ten
jest prawdziwy, gdy¿ zosta³ zweryfikowany przez u¿ycie klucza
publicznego nadawcy; podpis nie mo¿e byæ sfa³szowany, gdy¿
tylko nadawca zna swój klucz prywatny. Podpisany dokument
nie mo¿e byæ zmieniony, gdy¿ zmieniony dokument nie da siê
rozszyfrowaæ kluczem publicznym nadawcy.
Wad¹ takiego sposobu podpisywania dokumentów jest to,
¿e podpis jest co najmniej tak d³ugi, jak sam dokument, co
uniemo¿liwia praktyczne zastosowanie tej, jednak wymagaj¹cej
du¿ych mocy obliczeniowych, procedury. Dlatego stosuje
siê procedurê z wykorzy

Strona uwierzytelnienia wylicza skrót (hash) podpisywanej wiadomoœci. Nastêpnie
szyfruje ten skrót woim kluczem prywatnym i jako podpis cyfrowy do³¹cza do 
oryginalnej wiadomoœci. Dowolna osoba posiadaj¹ca klucz publiczny mo¿e sprawdziæ
autentycznoiœæ podpisu, poprzez odszyfrowanie skrótu za pomoc¹ klucza publicznego 
nadawcyu i porównanie go z w³asnorêcznie wyliczonym na podstawie wiadomoœci.s

Klucz publiczny u¿ywany jest do zaszyfrowania informacji, klucz prywatny do jej
odczytu . Poniewa¿ klucz prywatny jest wy³¹cznym posiadaniu adresata informacji,
tylko on mo¿e j¹ odczytaæ.
Klucz publiczny jest udostêpniony ka¿demu, kto zechce zaszyfrowaæ wiadomoœæ.

Algorytm RSA - jeden z pierwszych i obecnie najpopularniejszych asymetrycznych
algorytmów kryptograficznych z kluczem publicznym, zaprojektowany w 1977 przez Rona Rivesta,
Adi Szamira oraz Leonarda Adlemana.
Pierwszy algorytm, który mo¿e byæ stosowany zarówno do szyfrowania jak i do podpisów cyfrowych.

Bezpieczeñstwo szyfrowania opiera siê na trudnoœci faktoryzacji du¿ych liczb
z³o¿onych. Jego nazwa pochodzi od pierwszych liter nazwisko jego twórców.

Rozk³ad na czynniki = faktoryzacjia.

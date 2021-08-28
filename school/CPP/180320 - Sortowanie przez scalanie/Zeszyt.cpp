Dziel i zwyciê¿aj (ang. divide and conquer) – jedna z g³ównych metod projektowania algorytmów w informatyce, prowadz¹ca do bardzo efektywnych rozwi¹zañ.
Nazwa pochodzi od ³aciñskiej sentencji dziel i rz¹dŸ (³ac. divide et impera). W strategii tej problem dzieli siê rekurencyjnie na dwa lub wiêcej mniejszych
podproblemów tego samego (lub podobnego) typu tak d³ugo, a¿ fragmenty stan¹ siê wystarczaj¹co proste do bezpoœredniego rozwi¹zania. 
  
Z kolei rozwi¹zania otrzymane
dla podproblemów scala siê, uzyskuj¹c rozwi¹zanie ca³ego zadania.

Zalety algorytmu
-prostota implementacji
-wydajnosc
-stabilnosc
-algorytm sortuje zbior n-elementowy bez wzgledu na rodzaj danych wejsciowych

Wady algorytmu
-podczas scalania potrzebny jest dodatkowy obszar pamiêci przechowuj¹cy kope podtablic do scalenia

Zadanie: Posortuj niemalej¹co(rosn¹co) ci¹g liczb wykorzystuj¹c algorytm sortowania przez scalanie:

		9987554321
	    99875 54321
	   998 75 543 21
	 99 8 7 5 54 3 2 1
    9 9 8 7 5 5 4 3 2 1
    
    99 8  57  45 3  12
     899  57   345   12
      57899      12345
      	  1234557899
      	  
      	
      	84627351
      	8462 7351
      84 62  73 51 
    8 4 6 2 7 3 5 1
    
    48  26   37  15
     2468      1357
     	12345678

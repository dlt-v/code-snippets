Dziel i zwyci�aj (ang. divide and conquer) � jedna z g��wnych metod projektowania algorytm�w w informatyce, prowadz�ca do bardzo efektywnych rozwi�za�.
Nazwa pochodzi od �aci�skiej sentencji dziel i rz�d� (�ac. divide et impera). W strategii tej problem dzieli si� rekurencyjnie na dwa lub wi�cej mniejszych
podproblem�w tego samego (lub podobnego) typu tak d�ugo, a� fragmenty stan� si� wystarczaj�co proste do bezpo�redniego rozwi�zania. 
  
Z kolei rozwi�zania otrzymane
dla podproblem�w scala si�, uzyskuj�c rozwi�zanie ca�ego zadania.

Zalety algorytmu
-prostota implementacji
-wydajnosc
-stabilnosc
-algorytm sortuje zbior n-elementowy bez wzgledu na rodzaj danych wejsciowych

Wady algorytmu
-podczas scalania potrzebny jest dodatkowy obszar pami�ci przechowuj�cy kope podtablic do scalenia

Zadanie: Posortuj niemalej�co(rosn�co) ci�g liczb wykorzystuj�c algorytm sortowania przez scalanie:

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

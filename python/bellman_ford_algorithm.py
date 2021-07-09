import random
random.seed(19012)

class Graf:
 
    def __init__(self, wierzcholki):
        self.V = wierzcholki
        self.graf = []
 
    # punkt początkowy, punkt końcowy, waga
    def dodajKrawedz(self, u, v, w):
        self.graf.append([u, v, w])
         
    def drukuj_koniec(self, dlugosc, end, lancuch):
        print("Dlugosc sciezki z punktu 0 do {0} to: {1}".format(end, dlugosc[end]))
        print("Ścieżka to: {0}".format(lancuch))
     
    def czytaj_sciezke(self, punkt, rodzic):
        if rodzic[punkt] == 0:
            od_konca = 0
            return 0
        else:
            return rodzic[punkt]


    def Bellman(self, src, end): 

        dlugosc = [float("Inf")] * self.V # Przypisz wszystkim punktom wartość "nieznaną" -> nieskończoność
        dlugosc[src] = 0 # Przypisz punktowi docelowemu G wartość L(G) = 0
        rodzic = [0] * self.V # Przypisz wszystkim rodzica i zainicjalizuj na 0

        for _ in range(self.V - 1): # pętla dla V - 1 krawędzi, teoretycznie droga nie może być dłuższa od V-1 krawędzi
            # punkt początkowy, punkt końcowy, waga
            for u, v, w in self.graf:
                if dlugosc[u] != float("Inf") and dlugosc[u] + w < dlugosc[v]: # jeżeli długośc do u jest nam znana oraz długość do następnego punktu jest mniejsza niż jej obecna wartość to zmień na tą mniejszą.
                        dlugosc[v] = dlugosc[u] + w
                        rodzic[v] = u
                        print("Dlugosc nowej sciezki z punktu 0 do {0} to: {1}".format(v, dlugosc[v]))
                        #Wyznacz najkrótszą drogę przejścia zaczynając od punktu A i odczytując kolejno które kolejne punkty związane były z najmniejszymi sumami wybieranymi w 1. fazie
                         
        # print all distance
        punkt = end
        od_konca = 1
        lancuch = []
        lancuch.append(end)
        while(od_konca):
            if rodzic[punkt] == 0: 
                od_konca = 0
                lancuch.append(rodzic[punkt]) 
            else:
                lancuch.append(rodzic[punkt])
                punkt = rodzic[punkt]
        
        self.drukuj_koniec(dlugosc, end, lancuch)
 

# ilosc = 15

graph = Graf(9) # N
# punkt początkowy, punkt końcowy, waga
graph.dodajKrawedz(0, 1, 3)
graph.dodajKrawedz(0, 2, 2)
graph.dodajKrawedz(1, 3, 1)
graph.dodajKrawedz(3, 7, 2)
graph.dodajKrawedz(2, 7, 2)
graph.dodajKrawedz(2, 6, 1)
graph.dodajKrawedz(2, 5, 2)
graph.dodajKrawedz(7, 6, 2)
graph.dodajKrawedz(6, 8, 3)
graph.dodajKrawedz(1, 4, 2)
graph.dodajKrawedz(4, 5, 1)
graph.dodajKrawedz(5, 8, 2)

# def generujDane(ilosc):
#     while(ilosc):
#         g.dodajKrawedz(random.randint(0, 9))
#         ilosc = ilosc - 1

 
# Podaj punkt startowy i końcowy
graph.Bellman(0, 8)

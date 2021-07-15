# dane
x <- c(106, 115, 99, 109, 122, 119, 104, 125, 107, 111)

#hipoteza
# H0: mu = 110
# H1: mu != 110

#jaki test potrzebujemy? mamy rozk³ad normalny, sigmy nie mamy

t.test(x, mu=110)

#p-value = 0.5366 > alpha, nie odrzucamy H0.


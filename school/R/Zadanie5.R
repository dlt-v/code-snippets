data(chickwts)
View(chickwts)
#brak informacji o rozkladzie, nie ma sigmy
x <- chickwts$weight[chickwts$feed=='soybean']
# poziom istotnoœci = 0.05 = alpha


#H0: mu = 260
#H1: mu > 260

(n <- length(x)) # mala proba
#sprawdzamy czy jest rozklad normalny
#H0: jest normalny
#H1: nie jest normalny
shapiro.test(x)
#p-value shapiro jest wiêksze ni¿ alpha, czyli mamy rozk³ad normalny

t.test(x, mu=260, alt='g')

#p-value = 0.8174, nie mamy podstaw by nie wierzyæ w H0.


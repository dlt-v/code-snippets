
# zadanie 1

# Jak Y zale�y od X?
# Y = warto�� domu (zmienna zale�na)
# X = doch�d (zmienna niezale�na)

x <- c(36, 64, 49, 21, 28, 47, 58, 19, 32) # doch�d
y <- c(129, 310, 260, 92, 126, 242, 288, 81, 134) # warto�� domu


# a) wyznaczenie prostej regresji

plot(x,y, xlab='doch�d', ylab = 'warto�� domu')

# widoczna jest zale�no�� liniowa dodatnia, czy jest silna? - raczej tak
# wsp�czynnik korelacji Pearsona [-1, 1] - mierzy si�� zale�no��i LINIOWEJ!
cor(x,y)
# 0.980419 b.bliko 1, czyli b.silna zale�no�� pomi�dzy y a x


# prosta regresji - lm() - prosta MNK: y = a + b*x
lm(y~x)
# a =  -30.344, b = 5.466 
abline(lm(y~x), col=2, lwd=2)

segments(x, lm(y~x)$fitted.values, x, y)
text(45, 200, 'y = -30.344 + 5.466 *x', col=2)


# czy rownanie tej prostej mo�na przyj�� za model? tzn. czy to r�wnanie r�wnie
# dobrze opisuje zale�no�� w ca�ej populacji?

# b) 
# nasz model prostej regresji liniowej: Y = a + b*X + epsilon
# a =  -30.344, b = 5.466 

model <- lm(y~x)
summary(model)

# Weryfikacja poprawno�ci modelu
# 1)
# H0: b = 0 (nie ma zale�no�ci pomiedzy Y a X)
# H1: b != 0 (jest zale�no�� pomiedzy Y a X)

# p-value = 3.39e-06 < 0.05, przyjmujemy H1

# 2) 
# H0: a = 0 (wyraz wolny nie jest istotny)
# H1: a != 0 (wyraz wolny jest istotny)

# p-value =  0.126  > 0.05, przyjmujemy H0 i usuwamy wyraz wolny

model2 <- lm(y~x+0) # Y =  b*X + epsilon
summary(model2)

# nasz nowy model: Y = 4.7940 * X + epsilon
abline(model2, col=4, lwd=2)
segments(x, model2$fitted.values, x, y)

# 3) wsp�czynnik determinacji R^2 [0,1]
# Multiple R-squared:  0.9905
# b.bliskie 1, czyli model w b.du�ym stopniu wyja�nia Y na podstawie X

# 4) Analiza reszt

reszty <- model2$residuals

# 4.1 normalno�� reszt
shapiro.test(reszty)
# p-value = 0.8283 > 0.05, czyli reszty maj� rozk�ad normalny >> jest OK

# 4.2 �rednia warto�� reszt zerowa
t.test(reszty, mu=0)
# p-value = 0.5862 > 0.05, czyli �rednia zerowa >> jest OK

# 4.3 losowo�� reszt

plot(reszty)
abline(h=0, lty=2)

# widoczna chmura punkt�w, czyli reszty s� losowe >> jest OK


# c), d) prognoza (predykcja)

# Jakie jest Y dla x=40 tys.$?????

# nasz nowy model: Y = 4.7940 * X + epsilon
4.7940 * 40 # =  191.76 tys. $ przewidywana warto�� domu
points(40, 4.7940 * 40, cex=2, col=2)

predict(model2, list(x=40), level = 0.95, interval = 'p') # prognoza Y dla x=40
predict(model2, list(x=40), level = 0.95, interval = 'c') # prognoza EY dla x=40

# zadania domwowe: 2, 7, 8, 11
# reszta zada� z tego zestawu nie obowi�zuje na kolokwium
# (dla zainetresowanych rozwi�zania niekt�rych beda w UBI)


# ------------------------------------------------------------------------------

# 23 czerwca 13:15 - 14:30 (75min) - kolokwium w Inspera - 3 zadania - 40pkt
# 1) ANOVA (jedno i dwuczynnikowa)
# 2) Regresja (tylko co� podobnego do zadania 1)
# 3) statystyka opisowa + przedzia� ufno�ci + hipoteza 

# 23 czerwca po kolokwium - poprawka jednej wybranej kartk�wki -
# wysle mail z prosba o deklaracje













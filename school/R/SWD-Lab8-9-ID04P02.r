
# zadanie 1

# Jak Y zale¿y od X?
# Y = wartoœæ domu (zmienna zale¿na)
# X = dochód (zmienna niezale¿na)

x <- c(36, 64, 49, 21, 28, 47, 58, 19, 32) # dochód
y <- c(129, 310, 260, 92, 126, 242, 288, 81, 134) # wartoœæ domu


# a) wyznaczenie prostej regresji

plot(x,y, xlab='dochód', ylab = 'wartoœæ domu')

# widoczna jest zale¿noœæ liniowa dodatnia, czy jest silna? - raczej tak
# wspó³czynnik korelacji Pearsona [-1, 1] - mierzy si³ê zale¿noœæi LINIOWEJ!
cor(x,y)
# 0.980419 b.bliko 1, czyli b.silna zale¿noœæ pomiêdzy y a x


# prosta regresji - lm() - prosta MNK: y = a + b*x
lm(y~x)
# a =  -30.344, b = 5.466 
abline(lm(y~x), col=2, lwd=2)

segments(x, lm(y~x)$fitted.values, x, y)
text(45, 200, 'y = -30.344 + 5.466 *x', col=2)


# czy rownanie tej prostej mo¿na przyj¹æ za model? tzn. czy to równanie równie
# dobrze opisuje zale¿noœæ w ca³ej populacji?

# b) 
# nasz model prostej regresji liniowej: Y = a + b*X + epsilon
# a =  -30.344, b = 5.466 

model <- lm(y~x)
summary(model)

# Weryfikacja poprawnoœci modelu
# 1)
# H0: b = 0 (nie ma zale¿noœci pomiedzy Y a X)
# H1: b != 0 (jest zale¿noœæ pomiedzy Y a X)

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

# 3) wspó³czynnik determinacji R^2 [0,1]
# Multiple R-squared:  0.9905
# b.bliskie 1, czyli model w b.du¿ym stopniu wyjaœnia Y na podstawie X

# 4) Analiza reszt

reszty <- model2$residuals

# 4.1 normalnoœæ reszt
shapiro.test(reszty)
# p-value = 0.8283 > 0.05, czyli reszty maj¹ rozk³ad normalny >> jest OK

# 4.2 œrednia wartoœæ reszt zerowa
t.test(reszty, mu=0)
# p-value = 0.5862 > 0.05, czyli œrednia zerowa >> jest OK

# 4.3 losowoœæ reszt

plot(reszty)
abline(h=0, lty=2)

# widoczna chmura punktów, czyli reszty s¹ losowe >> jest OK


# c), d) prognoza (predykcja)

# Jakie jest Y dla x=40 tys.$?????

# nasz nowy model: Y = 4.7940 * X + epsilon
4.7940 * 40 # =  191.76 tys. $ przewidywana wartoœæ domu
points(40, 4.7940 * 40, cex=2, col=2)

predict(model2, list(x=40), level = 0.95, interval = 'p') # prognoza Y dla x=40
predict(model2, list(x=40), level = 0.95, interval = 'c') # prognoza EY dla x=40

# zadania domwowe: 2, 7, 8, 11
# reszta zadañ z tego zestawu nie obowi¹zuje na kolokwium
# (dla zainetresowanych rozwi¹zania niektórych beda w UBI)


# ------------------------------------------------------------------------------

# 23 czerwca 13:15 - 14:30 (75min) - kolokwium w Inspera - 3 zadania - 40pkt
# 1) ANOVA (jedno i dwuczynnikowa)
# 2) Regresja (tylko coœ podobnego do zadania 1)
# 3) statystyka opisowa + przedzia³ ufnoœci + hipoteza 

# 23 czerwca po kolokwium - poprawka jednej wybranej kartkówki -
# wysle mail z prosba o deklaracje













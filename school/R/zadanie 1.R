library(TeachingDemos)
library(MASS)

x <- c(1.36, 1.14, 1.27, 1.15, 1.20, 1.29, 1.27, 1.18, 1.23, 1.36, 1.38, 
       1.37, 1.30, 1.21, 1.33, 1.28, 1.32, 1.29, 1.33, 1.25)

# Rozk³ad normalny, wariacja = ?, odchylenie(stdev) = 0.07, alfa = 0.04

# Hipoteza:
# H0: mu = 120
# H1: mu > 120 Przewy¿sza 1.20

#Jaki test? Badamy mi. Jest rozk³ad normalny, niemamy MI. t.test pasuje

t.test(x, mu=1.20, alt='g', stdev = 0.07)

#p-value jest bardzo ma³e, wiêc odrzucamy H0. Wytrzyma³oœæ butelek istotnie przewy¿sza
#1.20
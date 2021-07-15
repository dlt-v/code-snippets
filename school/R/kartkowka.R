library(TeachingDemos)
library(MASS)

data(iris)
Viw(iris)
x <- iris$Petal.Width
#H0: mu =  1.5 Szerokosci nie s¹ istotnie ró¿ne
#H1: mu != 1.5 Szerokosci s¹ istotnie ró¿ne

#alpha = 0.05

t.test(x, mu=1.5)
# p-value = 3.341e-06 < alpha odrzucamy H0. Mo¿emy stwierdziæ ¿e szerokoœæ p³atka jest
#istotnie ró¿na od 1.5
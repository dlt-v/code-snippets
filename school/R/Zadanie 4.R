# H0 mu = .45
# H1 my > .45

n <- 500 #osób
k <- 226 #zag³osowali

# alpha 0.05, duza proba

binom.test(k, n, p=0.45, alt='greater')

# p-value = 0.4815 > alphy wiêc H0 zostaje. Na poziomie istotnoœci nie mo¿emy stwierdziæ
# ¿e frekwencja jest > .45
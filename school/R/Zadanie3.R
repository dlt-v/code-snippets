data(Loblolly)
View(Loblolly)

x <- Loblolly$height[Loblolly$age==15]

# rozk³ad normalny , alpha 0.05.

#H0: MU == 40
#H1: MU != 40

t.test(x, mu=40)

#p-value = 0.3162 > 0.05 wiêc H0 zostaje.
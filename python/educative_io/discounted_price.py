price = 250

if price >= 300:
    price -= price * 0.3
elif price >= 200:
    price -= price * 0.2
elif price >= 100:
    price -= price * 0.1
elif price >= 0:
    price -= price * 0.05

print(price)

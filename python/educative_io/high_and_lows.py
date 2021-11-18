def count_low_high(num_list):
    lows_and_highs = [0, 0]
    for item in num_list:
        if item > 50 or item % 3 == 0:
            lows_and_highs[1] += 1
        else:
            lows_and_highs[0] += 1
    return lows_and_highs

def check_sum(array):
    exists = False
    for i in array:
        for j in array:
            if (j + i) == 0:
                exists = True
                break
    return exists


print(check_sum([10, -14, 26, 5, -3, 13, -5]))

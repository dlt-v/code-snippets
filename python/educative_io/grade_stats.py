def grade_stats(lis):
    result = {}
    for letter in lis:
        if letter in result:
            result[letter] += 1
        else:
            result[letter] = 1
    return result


G = ['A', 'I', 'C', 'C', 'E', 'B', 'A', 'E', 'E', 'A', 'B', 'B', 'B']

print(grade_stats(G))

list = [[1, 2, 3], [2, 3, 3], [1, 3, 3]]


def find_max(num_list):
    array_of_sums = [sum(a) for a in num_list]
    return array_of_sums.index(max(array_of_sums))


print(find_max(list))

test_list = [40, 35, 82, 14, 22, 66, 53]
k = 2
for i in range(k - 1):
    test_list.remove(max(test_list))
    kth_max = max(test_list)
print(kth_max)

# alternative algorithm
test_list = [40, 35, 82, 14, 22, 66, 53]
k = 2

test_list.sort()
kth_max = test_list[-k]
print(kth_max)

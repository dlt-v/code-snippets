def fib(n):
    sum_array = [0, 1]
    if n <= 0:
        return -1
    else:
        for i in range(0, n - 1):
            sum_array.append(sum_array[-1] + sum_array[-2])

    return sum_array[n]


print(fib(7))


def alt_fib(n):
    # The first and second values will always be fixed
    first = 0
    second = 1

    if n < 1:
        return -1

    if n == 1:
        return first

    if n == 2:
        return second

    count = 3  # Starting from 3 because we already know the first two values
    while count <= n:
        fib_n = first + second
        first = second
        second = fib_n
        count += 1  # Increment count in each iteration
    return fib_n

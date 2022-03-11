def format(x):
    return str(x).rjust(5)


def mod_power(a, base, n):  # base, power, mod
    t = base

    x = 1
    bin_t = [int(i) for i in list('{0:0b}'.format(t))]
    bin_t.reverse()
    print('    i\tx(i)\ta(i)\tt(i)')

    i = 0
    while i < len(bin_t):
        print(
            f'{format(i)}\t{format(x)}\t{format(a)}\t{format(bin_t[i])}')
        i += 1

        if bin_t[i - 1] == 1:
            x = (x * a) % n

        if i == len(bin_t):
            break

        a = (a * a) % n

    print(f'{format(i)}\t{format(x)}\t{format(a)}\t{"-".rjust(5)}\n')

    print(f'Answer is: {x}')


mod_power(255, 521, 314)  # base, power, mod

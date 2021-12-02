alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']


def affine(word, a, b):  # RSTOWZXKXGNIX
    new_word = ''
    for letter in word.lower():
        after = (alphabet.index(letter) * a + b) % 26
        result = f'y({letter}) = ({alphabet.index(letter)} * {a} + {b}) % 26 = {after} = {alphabet[after]}'
        new_word += alphabet[after]
        print(result)
    print(new_word.upper())


def de_affine(word, a, b):  # RSTOWZXKXGNIX
    new_a = pow(a, -1, 26)  # find Multiplicative Inverse
    new_b = -new_a * b
    new_word = ''
    for letter in word.lower():
        after = (alphabet.index(letter) * new_a + new_b) % 26
        result = f'y({letter}) = ({alphabet.index(letter)} * {new_a} - {-new_b}) % 26 = {after} = {alphabet[after]}'
        new_word += alphabet[after]
        print(result)
    print(new_word.upper())


de_affine('RSTOWZXKXGNIX', 15, 23)

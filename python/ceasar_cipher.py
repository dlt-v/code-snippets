alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

# szyfr przesuwny - ceasar's cypher


def ceasar(word, key):  # kryptoanaliza -> FMTKOJVIVGDUV
    result = ''
    new_word = ''
    for letter in word.lower():
        after = (alphabet.index(letter) + key) % 26
        result = f'y({letter}) = ({alphabet.index(letter)} + {key}) % 26 = {after} = {alphabet[after]}'
        new_word += alphabet[after]

        print(result)
    print(new_word.upper())


def de_ceasar(word, key):  # FMTKOJVIVGDUV -> kryptoanaliza
    result = ''
    new_word = ''
    for letter in word.lower():
        after = (alphabet.index(letter) - key) % 26
        result = f'y({letter}) = ({alphabet.index(letter)} - {key}) % 26 = {after} = {alphabet[after]}'
        new_word += alphabet[after]

        print(result)
    print(new_word.upper())


de_ceasar('FMTKOJVIVGDUV', 21)

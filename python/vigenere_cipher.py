alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']


def vigenere(word, keyword):
    mask = match_keyword(word, keyword)
    result = ''
    for i in range(len(word)):
        ciphered_letter = (alphabet.index(
            word[i]) + alphabet.index(mask[i])) % 26
        print(
            f'y({word[i]}) = ({alphabet.index(word[i])} + {alphabet.index(mask[i])}) % 26 = {ciphered_letter}')

        result += alphabet[ciphered_letter]

    print(result.upper())


def de_vigenere(word, keyword):
    mask = match_keyword(word, keyword)
    result = ''
    for i in range(len(word)):
        ciphered_letter = (alphabet.index(
            word[i]) - alphabet.index(mask[i])) % 26
        print(
            f'y({word[i]}) = ({alphabet.index(word[i])} - {alphabet.index(mask[i])}) % 26 = {ciphered_letter}')

        result += alphabet[ciphered_letter]

    print(result.upper())


def match_keyword(word, keyword):
    mask = ''
    for i in range(len(word)):
        mask += keyword[i % len(keyword)]

    return mask


de_vigenere('DWAXVHJEAXFAK'.lower(), 'swieta')

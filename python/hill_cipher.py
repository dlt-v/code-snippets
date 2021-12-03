import numpy as np

alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']


def hill(word, key_matrix):
    i = 0
    encrypted = ''
    while i < len(word):
        if word[i+1]:
            vector = np.array([alphabet.index(word[i]), alphabet.index(word[i + 1])])
        else:
            vector = np.array([alphabet.index(word[i]), 0])
            
        result = vector.dot(key_matrix) % 26
        print(f'{key_matrix} * {vector} % 26 = {result}')
        encrypted += alphabet[result[0]]
        encrypted += alphabet[result[1]]
        i += 2
    print(encrypted.upper())


# key_matrix = np.array([[5, 6],[17,19]])

# hill('klawiatura', key_matrix) # DJKCOWTAHY

key_matrix = np.array([[1, 12], [21, 3]])

hill('DJKCOWTAHY'.lower(), key_matrix)
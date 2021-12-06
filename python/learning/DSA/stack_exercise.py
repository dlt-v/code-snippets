from stack import Stack


def convert_int_to_bin(dec_num):

    if dec_num == 0:
        return '0'

    conv_result = Stack()
    # convert decimal into binary stack (LSB first)
    while dec_num > 0:
        conv_result.push(dec_num % 2)
        dec_num = dec_num // 2
    rev_result = ''
    while not conv_result.is_empty():
        rev_result += str(conv_result.pop())
    return rev_result


print(convert_int_to_bin(242))

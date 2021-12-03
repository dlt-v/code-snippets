def detect_pattern(s1, s2):
    array1 = []
    array2 = []
    if len(s1) == len(s2):
        i = 0
        while i < len(s1):
            if s1[i] in array1:
                found_index = array1.index(s1[i])
                if array2[found_index] == s2[i]:
                    pass
                else:

                    return False
            elif s2[i] in array2:
                found_index = array2.index(s2[i])
                if array1[found_index] == s1[i]:
                    pass
                else:
                    return False
            else:
                array1.append(s1[i])
                array2.append(s2[i])
            i += 1
        return True
    else:
        return False


print(detect_pattern('---', 'aaz'))

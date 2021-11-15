def check_balance(brackets):
    open_brackets = 0
    closed_brackets = 0
    for bracket in brackets:
        if bracket == '[':
            open_brackets += 1
        else:
            closed_brackets += 1
    
    if open_brackets == closed_brackets:
        return True
    return False

print(check_balance("[[[[][]]]]]"))
def postfix(expression):
    stack= []
    result = 0
    for char in expression:
        if char.isdigit():
            stack.append(int(char))
        else:
            oparand1 = stack.pop()
            oparand2 = stack.pop()

            if char == '+':
                result = oparand1 + oparand2
            elif char == '-':
                result = oparand1 - oparand2
            elif char == '*':
                result = oparand1 * oparand2
            elif char == '/':
                result = oparand1 / oparand2

            stack.append(result)
        
    return stack[0]

result = postfix('23*45+*')
print(result)
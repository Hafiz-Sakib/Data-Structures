expression = "23*45+*"
stack = []

for char in expression:
    if char.isdigit():
        stack.append(int(char))
    elif char in "+-*/":
        if len(stack) < 2:
            print("Invalid postfix expression")
            break

        operand2 = stack.pop()
        operand1 = stack.pop()

        if char == '+':
            result = operand1 + operand2
        elif char == '-':
            result = operand1 - operand2
        elif char == '*':
            result = operand1 * operand2
        elif char == '/':
            if operand2 == 0:
                print("Division by zero error")
                break
            result = operand1 / operand2

        stack.append(result)
    else:
        print("Invalid character in expression")
        break

if len(stack) == 1:
    print(f"Result of {expression} is {stack[0]}")
else:
    print("Invalid postfix expression")

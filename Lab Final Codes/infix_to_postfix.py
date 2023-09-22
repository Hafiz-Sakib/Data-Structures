def infix_to_postfix(infix_expression):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    output = []
    operator_stack = []

    for token in infix_expression:
        if token.isalnum():
            output.append(token)
        elif token == '(':
            operator_stack.append(token)
        elif token == ')':
            while operator_stack and operator_stack[-1] != '(':
                output.append(operator_stack.pop())
            operator_stack.pop()  
        else:
            while operator_stack and precedence.get(token, 0) <= precedence.get(operator_stack[-1], 0):
                output.append(operator_stack.pop())
            operator_stack.append(token)

    while operator_stack:
        output.append(operator_stack.pop())

    return ''.join(output)

infix_expression = "a+b*(c^d-e)^(f+g*h)-i"
postfix_expression = infix_to_postfix(infix_expression)
print("Postfix Expression:", postfix_expression)

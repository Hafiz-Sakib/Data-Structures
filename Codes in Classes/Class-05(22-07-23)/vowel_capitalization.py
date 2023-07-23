s = input()
ans = ""
for c in s:
        if c in 'AEIOU':
            ans += c.lower()
        elif c in 'aeiou':
            ans += c.upper()
        else:
            ans += c

print(ans)
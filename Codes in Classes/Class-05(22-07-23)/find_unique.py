n = int(input())
a = list(map(int, input().split()))

for i in range(n - 1):
    ok = False
    for j in range(i + 1, n):
        if a[i] == a[j]:
            ok = True
            a[j] = -1
    if ok:
        a[i] = -1

for i in range(n):
    if a[i] != -1:
        print(a[i], end=' ')

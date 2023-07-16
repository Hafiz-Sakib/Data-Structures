n = int(input())
a = list(map(int, input().split()))

for i in range(n - 1):
    minIndex = i
    for j in range(i + 1, n):
        if a[j] < a[minIndex]:
            a[j], a[minIndex] = a[minIndex], a[j]

for num in a:
    print(num, end=" ")

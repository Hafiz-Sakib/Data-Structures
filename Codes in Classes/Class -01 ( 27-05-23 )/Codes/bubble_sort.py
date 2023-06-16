# Sort an Array in Ascending Order (Bubble Sort)
n = int(input())
a = list(map(int, input().split()))

for i in range(n - 1):
    for j in range(i + 1, n):
        if a[i] > a[j]:
            a[i], a[j] = a[j], a[i]

for num in a:
    print(num, end=" ")

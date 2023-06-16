# Insertion Sort 
n = int(input())
a = list(map(int, input().split()))

for i in range(1, n):
    key = a[i]
    j = i - 1
    while j >= 0 and a[j] > key:
        a[j + 1] = a[j]
        j -= 1
    a[j + 1] = key

for i in range(n):
    print(a[i], end=" ")

print()

n = int(input())
a = list(map(int, input().split()))
q = int(input())

ans = -1
first = 0
last = len(a) - 1

while first <= last:
    mid = (first + last) // 2
    if q == a[mid]:
        ans = mid
        break
    elif a[mid] < q:
        first = mid + 1
    else:
        last = mid - 1

if ans == -1:
    print("The number is not present in the array.")
else:
    print("The number is found at position", ans + 1, "in the array.")

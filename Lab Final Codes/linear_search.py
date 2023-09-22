n = int(input(""))

arr = []

for i in range(n):
    element = int(input(f"Enter element {i + 1}: "))
    arr.append(element)

target = int(input("Enter the number you want to find in the array: "))

found = False
for i in range(len(arr)):
    if arr[i] == target:
        found = True
        print(f"The number is found at position {i + 1} in the array.")
        break

if not found:
    print("The number is not present in the array.")

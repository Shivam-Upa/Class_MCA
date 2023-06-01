number = int(input("Enter a number: "))

print("Numbers divisible by 5 but not by 3:")
for i in range(1, number + 1):
    if i % 5 == 0 and i % 3 != 0:
        print(i)

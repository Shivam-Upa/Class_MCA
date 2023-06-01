n = int(input("Enter a Number"))

for i in range(int(n**(1/2)), 0, -1):
    if n % i == 0 and i % 2 != 0:
        print(i)
    p = n // i
    if n % p == 0 and p % 2 != 0:
        print(p)

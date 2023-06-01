n = int(input("enter"))
c=0
for i in range(1,int(n**(1/2))+1):
    if n%i==0:
        if i==n//i:
            print(i)
            c= c+1
        else:
            print(i)
            print(n//i)
            c=c+2
print(c,"posible")
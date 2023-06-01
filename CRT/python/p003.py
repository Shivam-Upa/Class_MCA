n = int ( input("Enter a number"))
for i in range(1,int(n**(1/2))+1):
    if(n%(i**2)==0):
        print(i**2)
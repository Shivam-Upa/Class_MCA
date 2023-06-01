n = int ( input ( "Enter a Number" ) )
for i in range(1, int (n**( 1/3 ))+1 ):
    if(n% (i**3)==0):
        print(i**3)
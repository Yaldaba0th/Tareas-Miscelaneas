n=int(input("Ingrese altura de la piramide"))
for x in range (1,n+1) :
    for z in range (n-x) :
        print(" ",end="")
    for y in range (2*x-1) :
        print("*",end="")
    print("")
c=input()

n=int(input("Ingrese numero"))
while n <=0 :
    n=int(input("Error ingrese otro numero"))

if n%2==0 :
    print("Su numero",n,"es par")
    print("La secuencia es:",end="")
    while n>2 :
        print (n,end="-")
        n=n-2
    print(n)
else :
    print("Su numero",n,"es impar")
    print("La secuencia es:",end="")
    while n>1 :
        print (n,end="-")
        n=n-2
    print(n)

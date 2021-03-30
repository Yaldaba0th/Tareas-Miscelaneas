r="si"
while r == "Si" or r == "si" or r =="SI" :
    print("Ingrese un numero positivo no mayor que 50")
    n=int(input())
    while n < 0 or n > 50 :
        print("Error!")
        print("Ingrese un numero positivo no mayor que 50")
        n=int(input())
    c=0
    while c <= n :
        print(c,end=" ")
        c=c+1
    print("Repetir programa?")
    r=input()
print("Fin")

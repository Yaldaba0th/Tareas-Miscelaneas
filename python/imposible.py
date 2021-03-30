r="SI"
while r == "SI" :
    print("Ingrese un numero positivo")
    n=int(input())
    while n <= 0 :
        print("Ingrese un numero positivo")
        n=int(input())
    c=1
    while c <= n :
        rn=c
        while rn > 0 :
            print(c,end="")
            rn=rn-1
        c=c+1
    print("Repite?")
    r=input()
print("Chao")

    
        
    
    

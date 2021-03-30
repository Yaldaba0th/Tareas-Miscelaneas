sp=0
si=0
n=int(input("Ingrese un valor"))
while n<=0 :
    n=int(input("Error! Ingrese un numero positivo"))
while n!=0 :

    if n%2==0 :
        sp=sp+n
    else :
        si=si+n
    n=int(input("Ingrese valor"))

    while n<0:
        n=int(input("Error! Ingrese un numero positivo"))
if sp > si :
    for x in range (sp-si) :
        print("*",end="")
if sp < si :
    for x in range (si-sp) :
        print("@",end="")
else :
    for x in range (sp+si) :
        print("#",end="")

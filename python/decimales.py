f=[]
num=float(input("Ingrese numero"))
if num >= 1 :
    entero=1
else:
    entero=0
fraccionario=(num-(num//1))%entero
print(fraccionario)
if fraccionario!=0:
    digitos=int(input("Ingrese numero de decimales"))
    cont=0
    while cont<digitos:
        temp=fraccionario*2
        if temp >= 1 :
            enterot=1
        else:
            enterot=0
        f.append(enterot)
        fraccionario=temp-enterot
        cont+=1
    print(f)
        

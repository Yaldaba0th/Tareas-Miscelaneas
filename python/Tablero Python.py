import random

def tablero(t,a):
    contadorlista=0
    for contador1 in range (t):
        for contador2 in range (t):
            print(a[contadorlista],end="")
            contadorlista+=1
        print()


def posiciones(pj,pc,a,sj,sc):
    a[pj]=sj
    a[pc]=sc
    return a
    
    
    
a=[]    

t=int(input("Seleccione tamaño tablero entre 4 y 12"))
while t<4 or t>12:
    t=int(input("Error! Seleccione tamaño tablero entre 4 y 12"))

sj=input("Elija simbolo jugador (letra mayuscula)")
mj=sj.lower()
sc=input("Elija simbolo jugador (letra mayuscula)")
while sj==sc:
    sc=input("Error! Elija simbolo distinto a jugador (letra mayuscula)")    
mc=sc.lower()


pj=random.randint(0,(t**2)-1)
pc=random.randint(0,(t**2)-1)


while pj==pc:
    pc=random.randint(0,(t**2)-1)

for x in range (t**2):
    a.append("#")

a = posiciones(pj,pc,a,sj,sc)

tablero(t,a)







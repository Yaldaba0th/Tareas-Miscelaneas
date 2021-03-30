print("Ingrese numero positivo")
p=int(input())
while p <= 0 :
    print("ERROR! Numero no positivo, intente de nuevo")
    p=int(input())
print("Ingrese otro numero, mayor que el anterior")
q=int(input())
while q <= p :
    print("ERROR! Numero no es mayor que el anterior, intente de nuevo")
    q=int(input())
c=0
while c*p < q :
    print(c*p)
    c=c+1

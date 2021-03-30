print("Ingrese numero positivo")
p=int(input())
print("Ingrese otro numero positivo, mayor que el anterior")
q=int(input())
while q <= p or q <= 0 or p <= 0 :
    print("Uno o mas de los numeros no cumplen los parametros requeridos, intente de nuevo")
    print("Ingrese numero positivo p")
    p=int(input())
    print("Ingrese numero positivo q, mayor que p")
    q=int(input())
c=0
while c*p < q :
    print(c*p)
    c=c+1

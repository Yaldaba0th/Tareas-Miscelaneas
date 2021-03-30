N=int(input("Ingrese numero de numeros"))
while N <= 0 :
    N=int(input("Error, ingrese entero positivo"))
n=int(input("Ingrese numero entero"))
mayor=menor=n
for x in range (N-1) :
    n=int(input("Ingrese numero entero"))
    if n > mayor :
        mayor=n
    if n < menor :
        menor=n
print("El menor es : ",menor)
print("El mayor es : ",mayor)



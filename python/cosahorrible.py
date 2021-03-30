def main():
	frase=ingresof()
	np=numero_palabras(frase)
	i=ingresoi(np)
	palabra=obtener_palabra(frase,i)
	print(palabra)
	
def ingresoi(p):	
	n=int(input("Ingrese posicion palabra"))
	while n<0 or n>p:
		print("Error!")
		n=int(input("Ingrese posicion palabra valida"))
	return(n)
def ingresof():
	f=input("Ingrese frase ")
	while len(f)==0:
		print("Error!")		
		f=input("Ingrese frase no vacia ")
	return f


def obtener_palabra(frase,i):
	f2=""
	ce=-1
	for x in range(len(frase)):
		
		if frase[x]==" ":
			ce+=1
		
		if ce==i-1 and frase[x]!=" ":
			f2+=frase[x]
	return f2

	
def numero_palabras(f):
	c=0
	for x in range(len(f)):
		if f[x]==" ":
			c+=1
	return c

main()

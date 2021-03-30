def purosBlancos(f):
	nv=0
	for x in range (len(f)):
		if f[x]!=" ":
			nv+=1
	if nv==0:
		return True
	else:
		return False
def otraCosa(num):
	cualquiera=False
	for i in range(len(num)):
		if not (num[i]>="0" and num[i]<="9"):
			cualquiera=True
	return cualquiera
def ingreso(intentos):
	class Errores(Exception):
		pass
	class nonumeros(Errores):
		pass
	class SoloBlancos(Errores):
		pass
	class Vacia(Errores):
		pass
	sigue=True
	while(sigue):
		try:
			numero = input("Intento #{0}: ".format(intentos))
			if(len(numero)==0):
				raise Vacia
			elif(purosBlancos(numero)):
				raise SoloBlancos
			else:
				if(otraCosa(numero)):
					raise nonumeros
				else:
					sigue = False
					return numero
		except(nonumeros):
			print("Ingreso caracteres no numericos")
		except(SoloBlancos):
			print("Ingreso solo blancos")
		except(Vacia):
			print("Nada ingreso")
import random
n=random.randint(0,5)
gano=False
c=1
print("Adivina el numero entre 0 y 10!!")
while c<=5 and not gano:
	i=int(ingreso(c))
	if i<n:
		print("El numero es menor que la entrada")
	elif i>n:
		print("El numero es mayor que la entrada")
	elif i==n:
		print("Has ganado!!!")
		print("Intentos utilizados: ",c)
		gano=True
	c+=1
if not gano:
	print()
	print("Se te acabaron los intentos")
	print("GAME OVER")

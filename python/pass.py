def soloespacios(f):
	nv=0
	for x in range (len(f)):
		if f[x]!=" ":
			nv+=1
	if nv==0:
		return True
	else:
		return False


def main():
	class MiError(Exception):
		pass
	class fraseVacia(MiError):
		pass
	class mayor10(MiError):
		pass
	class menor2(MiError):
		pass
	class espacio(MiError):
		pass
	



	FM=""


	sigue=True
	while(sigue):
		try:
			
			n=input("Ingrese un entero: ")
			
			if(len(n)==0):
				raise fraseVacia
			N=int(n)
			if(N<=2):
				raise menor2
			elif(N>=10):
				raise mayor10
			sigue=False
		except(fraseVacia):
			print("Ingreso nulo")		

		except(ValueError):
			print("No ingreso un numero entero")
		except(menor2):
			print("Numero es menor o igual a 2")
		except(mayor10):
			print("Numero es mayor o igual a 10")
	for x in range (N):
			sigue=True
			while(sigue):
				try:
					F = (input("Ingrese frase {0}: ".format(x+1)))
					if(len(F)==0):
						raise fraseVacia
					elif(soloespacios(F)):
						raise espacio				
					sigue=False
				except(fraseVacia):
					print("Frase vacia")
				except(espacio):
					print("Frase es solo espacios")
			if len(F)>len(FM):
				FM=F
	print(FM)

ex=True
while(ex):
	try:
		main()
		ex=False
	except(KeyboardInterrupt):
		print()		
		R=input("Ingrese R para reiniciar, cualquier otro para cerrar: ")		
		if R=="R" or R=="r":
			print()
			print("Programa interrumpido")
			print("Reiniciando...")
		else:
			print()
			print("Cerrando...")
			ex=False

			

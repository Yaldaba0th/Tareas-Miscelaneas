def main():
	H1 = leeDoce()
	H2 = leeDoce()
	suma(H1,H2)
	
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
	largo=len(num)
	cualquiera = False
	i=0
	while(not cualquiera and i<largo):
		rango1=(num[i]>="a" and num[i]<="b")
		rango2=(num[i]>="A" and num[i]<="B")
		rango1=(num[i]>="0" and num[i]<="9")
		if(not rango1 and not rango2 and not rango3):
			cualquiera = True
		i+=1
	return cualquiera
def leeDoce():
	class Errores(Exception):
		pass
	class NoEsDoce(Errores):
		pass
	class SoloBlancos(Errores):
		pass
	class Vacia(Errores):
		pass
	sigue=True
	while(sigue):
		try:
			numero = input("Ingrese un numero en base doce: ")
			if(len(numero)==0):
				raise Vacia
			elif(purosBlancos(numero)):
				raise SoloBlancos
			else:
				if(otraCosa(numero)):
					raise NoEsDoce
				else:
					sigue = False
					return numero
		except(NoEsDoce):
			print("NO es ne base 12")
		except(SoloBlancos):
			print("Ingreso solo blancos")
		except(Vacia):
			print("Nada ingreso")

def suma(n1,n2):
	sobra=0
	for x range len(n1):
		
		
		
		
		
	






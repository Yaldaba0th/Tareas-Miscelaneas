def main():
	n1,n2=ingresaNum()
	imprimeSeq(n1,n2)

def ingresaNum():
	a=input("Ingrese entero ")
	b=input("Ingrese otro entero ")
	if type(a)!=int or type(b)!=int:
		a=0
		b=10
	return int(a),int(b)

	

def imprimeSeq(a,b):
	ma=0
	me=0
	if a>b:
		ma=a
		me=b
	else:
		ma=b
		me=a

	for x in range (me, ma):
		print(x,end=" ")
	print(ma)

main()

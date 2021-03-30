discriminante = lambda a,b,c:((b**2)-4*a*c)*(1/2)
areatriangulo = lambda base,altura:(base*altura)/2
areacirculo = lambda radio:3.14*(radio**2)
volumenesfera = lambda radio:3.14*(4/3)*(radio**3)

print(discriminante(1,4,4))
print(areatriangulo(4,5))
print(areacirculo(2))
print(volumenesfera(3))

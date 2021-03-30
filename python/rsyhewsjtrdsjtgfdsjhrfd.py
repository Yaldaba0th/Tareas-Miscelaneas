def listeichon(lista):
    b=[]
    for x in range (len(lista)):
        b.append(0)
    for x in range (len(b)):
        print(b)
        if x+3>(len(b)-1):
            b[x+3-len(b)]=lista[x]
        else:
            b[x+3]=lista[x]
    return (b)
        
a=[1,2,3,4,5,6]
a=listeichon(a)
print(a)

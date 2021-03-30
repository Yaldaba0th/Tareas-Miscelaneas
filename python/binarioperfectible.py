x=0
s=0
n=int(input("Ingrese numero en base 2: "))
no=n
while n//(10**x)!=1 :
      x=x+1
x=x+1


for z in range (1,x+1) :
      t=((n)%(10**(z)))
      if t > 1 :
          t=n//(10**(z-1))
          
          if t > 1 :
              t=t%10
      
      n=n-t*(10**(z-1))
      
      t=t*(2**(z-1))
      
      s=s+t    
print(no,"en base 10 es:",s)

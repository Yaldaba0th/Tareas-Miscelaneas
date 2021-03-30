x=0
s=0
n=int(input())
while n//(10**x)!=1 :
      x=x+1
x=x+1
print(x)

for z in range (1,x+1) :
      t=((n)%(10**(z)))
      if t > 1 :
          t=n//(10**(z-1))
          print("t 2 es ",t)
          if t > 1 :
              t=t%10
      print("t es",t)
      n=n-t*(10**(z-1))
      print("n es",n)
      t=t*(2**(z-1))
      print("t prima es",t)
      s=s+t    
      print("s es",s)

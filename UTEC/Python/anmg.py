x=int(input("ingrese angulo: "))
y=int(input("ingrese angulo: "))

a=(x*60)%60
b=(y*60)%60

c=(x*360)%60
d=(y*360)%60

j=x+y
n=a+b
m=c+d

print("angulo suma:", j, m, n )


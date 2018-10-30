#pregunta 1
a=[1,3,12.2,15,14]
b=0
for c in a:
	b=b+c
print "el resultado es: ", b

#pregunta 2
d=(int(raw_input("Colocar el valor de x: ")))
print 2*d**2+4*d+3

#pregunta 3
for e in range(-3,4):
	print 2*e**2+4*e+3

#pregunta 4
f=[1,2,8,4,6,15]
g=[3,8,7,59,32,1]
h=[]
for j in range(0,len(f)):
	h.append(f[j]+g[j])
print h

#pregunta5
k=[1,2,3,4,5,6,7,8,9,10]
l=[]
for m in range(len(k),0,-1):
  l.append(m)
print l

#pregunta 6
import math
x1=int(raw_input("Posicion x de la esfera 1 entre -100 y 100: "))
y1=int(raw_input("Posicion y de la esfera 1 entre -100 y 100: "))
z1=int(raw_input("Posicion z de la esfera 1 entre -100 y 100: "))
r1=int(raw_input("Radio de la esfera 1: "))
while r1<=0:
	r1=int(raw_input("Radio de la esfera 1: "))
print "Las coordenadas del centro de la esfera 1 en x son: ",x1,"en y: ",y1,"en z: ",z1,"con radio: ",r1
x2=int(raw_input("Posicion x de la esfera 2 entre -100 y 100: "))
y2=int(raw_input("Posicion y de la esfera 2 entre -100 y 100: "))
z2=int(raw_input("Posicion z de la esfera 2 entre -100 y 100: "))
r2=int(raw_input("Radio de la esfera 2: "))
while r2<=0:
	r2=int(raw_input("Radio de la esfera 2: "))
print "Las coordenadas del centro de la esfera 2 en x son: ",x2,"en y: ",y2,"en z: ",z2,"con radio: ",r2
ce1=[x1,y1,z1]
ce2=[x2,y2,z2]
v=[]
for n in range(0,len(ce1)):
	o=ce1[n]-ce2[n]
	v.append(o)
m=math.sqrt(v[0]**2+v[1]**2+v[2]**2)
if r1+r2>m:
	co1=True
	print "las esferas colicionan"
else:
	co1=False
	print "las esferas no colicionan"
#pregunta 7
x1=int(raw_input("posición x de la esfera1 entre -100 y 100: "))
while x1<-100 or x1>100:
  print"x sobrepasa los valores establecidos, intente de nuevo"
  x1=int(raw_input("posición x de la esfera1 entre -100 y 100: "))
  
y1=int(raw_input("posición y de la esfera1 entre -100 y 100: "))
while y1<-100 or y1>100:
  print "y sobrepasa los valores establecidos, intente de nuevo"
  y1=int(raw_input("posición y de la esfera1 entre -100 y 100: "))
  
z1=int(raw_input("posición z de la esfera1 entre -100 y 100: "))
while z1<-100 or z1>100:
 print "z sobrepasa los valores establecidos, intente de nuevo"
 z1=int(raw_input("posición z de la esfera1 entre -100 y 100: "))
  
r1=int(raw_input("radio de la esfera1: "))
while r1<=0:
  r1=int(raw_input("radio de la esfera1: "))

ve1=[int(raw_input("modulo de velocidad en x: ")),int(raw_input("modulo de velocidad en y: ")),int(raw_input("modulo de velocidad en z: "))]
for e in ve1:
  while e<-100 or e>100:
    print "El modulo sobrepasa los valores establecidos, intente de nuevo"
    ve1=[int(raw_input("modulo de velocidad en x: ")),int(raw_input("modulo de velocidad en y: ")),int(raw_input("modulo de velocidad en z: "))]

print "las coordenadas del centro de la esfera1 en x son: ",x1," en y: ",y1," en z: ",z1," con radio: ",r1," y un modulo de velocidad de: ",ve1


x2=int(raw_input("posición x de la esfera2 entre -100 y 100: "))
while x2<-100 or x2>100:
  print "x sobrepasa los valores establecidos, intente de nuevo"
  x2=int(raw_input("posición x de la esfera2 entre -100 y 100: "))
  
y2=int(raw_input("posición y de la esfera2 entre -100 y 100: "))
while y2<-100 or y2>100:
  print "y sobrepasa los valores establecidos, intente de nuevo"
  y2=int(raw_input("posición y de la esfera2 entre -100 y 100: "))
  
z2=int(raw_input("posición z de la esfera2 entre -100 y 100: "))
while z2<-100 or z2>100:
 print "z sobrepasa los valores establecidos, intente de nuevo"
 z2=int(raw_input("posición z de la esfera2 entre -100 y 100: "))
 
r2=int(raw_input("radio de la esfera2: "))
while r2<=0:
  r2=int(raw_input("radio de la esfera2: "))
  
ve2=[int(raw_input("modulo de velocidad en x: ")),int(raw_input("modulo de velocidad en y: ")),int(raw_input("modulo de velocidad en z: "))]
for e in ve1:
  while e<-100 or e>100:
    print "El modulo sobrepasa los valores establecidos, intente de nuevo"
    ve2=[int(raw_input("modulo de velocidad en x: ")),int(raw_input("modulo de velocidad en y: ")),int(raw_input("modulo de velocidad en z: "))]

print "las coordenadas del centro de la esfera2 en x son: ",x2," en y: ",y2," en z: ",z2,"con radio: ",r2," y un modulo de velocidad de: ",ve2

ce1=[x1,y1,z1]
ce2=[x2,y2,z2]
v=[]

for e in range(0,len(ce1)):
  a=ce1[e]-ce2[e]
  v.append(a)
  
m=math.sqrt(v[0]*2+v[1]*2+v[2]*2)

if r1+r2>m:
  col=True
  print "Las esferas colisionan"
else:
  col=False
  print "Les esferas no colisionan"
vel=[1,2,3]

while col==False:
  for e in range(0, len(ce1)):
    ce1[e]=ce1[e]+ve1[e]
    ce2[e]=ce2[e]+ve2[e]
    vel[e]=ce1[e]-ce2[e]
    
  m=math.sqrt(vel[0]*2+vel[1]*2+vel[2]*2)
    
  if m<r1+r2:
    col=True
    print "Las esferas colisionan"
  elif m+r1>100:
    col=True
    print "La esfera1 colisiona con uno de los limites"
  elif m+r2>100:
    col=True
    print "La esfera2 colisiona con uno de los límites"
#pregunta1
def seleccion(lista):
	a=len(lista)
	for c in range(0,a-1):
		b=c
		d=lista[c]
		for e in range(c+1,a):
			if lista[e]<d:
				b=e
				d=lista[e]
		lista[b]=lista[c]
		lista[c]=d
	return lista
lista=[1,8,7,5,9,6,4,2]
print seleccion(lista)

#pregunta 2
def insercion(lista1):
	for b in range(1,len(lista1)):
		a=lista1[b]
		c=b-1
		while c>=0 and lista1[c]>a:
			lista1[c+1]=lista1[c]
			c=c-1
		lista1[c+1]=a
	return lista1
lista1=[2,1,5,8,9,6,3,4]
print insercion(lista1)

#pregunta 3
def burbuja(lista2):
	for a in range(0,len(lista2)):
		for b in range(0,len(lista2)):
			if lista2[a]<lista2[b]:
				aux=lista2[a]
				lista2[a]=lista2[b]
				lista2[b]=aux
	return lista2
lista2=[2,9,5,4,8,6,3,7]
print burbuja(lista2)

#pregunta 4
from random import randrange
import time
start_time = time.time()
a=[]
for i in range(0,100):
    a.append(randrange(0,200))
b=[]
for i in range(0,1000):
    b.append(randrange(0,200))
c=[]
for i in range(0,10000):
    c.append(randrange(0,200))
d=[]
for i in range(0,100000):
    d.append(randrange(0,200))

#con 100
seleccion(a)
end_time = time.time() - start_time
print end_time
#0.431711196899
insercion(a)
end_time = time.time() - start_time
print end_time
#0.432008981705
burbuja(a)
end_time = time.time() - start_time
print end_time
#0.433680057526
#el que mas demora es burbuja

#con 1000
seleccion(b)
end_time = time.time() - start_time
print end_time
#0.488867044449
insercion(b)
end_time = time.time() - start_time
print end_time
#0.498008012772
burbuja(b)
end_time = time.time() - start_time
print end_time
#0.604287147522
#el que mas demora es burbuja

#con 10000
seleccion(c)
end_time = time.time() - start_time
print end_time
#7.69090008736
insercion(c)
end_time = time.time() - start_time
print end_time
#7.71513199806
burbuja(c)
end_time = time.time() - start_time
print end_time
#28.4950389862
#el que mas demora es burbuja

#con 100000
seleccion(d)
end_time = time.time() - start_time
print end_time
#970.5081141
insercion(d)
end_time = time.time() - start_time
print end_time
#970.547742128
burbuja(d)
end_time = time.time() - start_time
print end_time
#4431.68803811
#el que mas demora es burbuja

#pregunta 5
def buscar(l,e):
  for i in range(len(l)):
    if l[i]==e:
      return True
  return False

def busqueda1(l,e):
  if len(l)==0:
    return False
  return busqueda2(l,e,0,len(l)-1)

def busqueda2(l,e,inicio,fin):
  if inicio==fin:
    return l[inicio]==e
  i=(inicio+fin)//2
  if l[i]==e:
    return True
  if e>l[i]:
    return busqueda2(l,e,l[i+1],fin)
  if e<l[i]:
  	return False
  return busqueda2(l,e,inicio,l[i-1])

#pregunta 6
start_time = time.time()
l=leeLista()
buscar(l,100)
end_time = time.time() - start_time
print end_time

l=leeLista()
l.sort
start_time = time.time()
print busqueda1(l,100)
end_time = time.time() - start_time
print end_time

l=leeLista()
l.sort
start_time = time.time()
print l.index(100)
end_time = time.time() - start_time
print end_time
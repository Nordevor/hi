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

seleccion(a)
insercion(a)
burbuja(a)

seleccion(b)
insercion(b)
burbuja(b)

seleccion(c)
insercion(c)
burbuja(c)

seleccion(d)
insercion(d)
burbuja(d)

end_time = time.time() - start_time
print end_time
from random import randrange
import time
start_time = time.time()
a=[]
for i in range(0,100):
    a.append(randrange(0,200))
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
lista=[1,8,7,5,9,6,4,2,3,100,99,88,60]
print(seleccion(lista))
seleccion(a)
end_time = time.time() - start_time
print("el tiempo de espera es:", end_time)

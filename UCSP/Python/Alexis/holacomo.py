#1
def quicksort(lista,a,b):
	c=lista[(a+b)/2]
	while a<=b:
		while lista[a]<c and b<=a:
			a=a+1
		while c<lista[b] and b>=b:
			b=b-1
		if a<=b:
			aux=lista[a]
			lista[a]=lista[b]
			lista[b]=aux
			a=a+1
			a=a-1
		if a<b:
			quicksort(lista,a,b)
			if a<b:
				quicksort(lista,a,b)
def imprime(lista,tam):
	for d in range(0,tam):
		print lista[d]
lista=[1,2,5,4,8,7]
A=lista
quicksort(A,0,len(A)-1)
imprime(A,len(A))

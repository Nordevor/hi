lista=[]
a=int(input("Numero de alumnos: "))
for e in range(0,a):
    lista.append(int(input("Peso: ")))
print(min(lista))
print(max(lista))
print(sum(lista))
print(len(lista)/a)
print(a)

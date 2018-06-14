n=int(input())
diccionario={}
lista=[]
for x in range(0,n):
    z=input()
    w=int(input())
    diccionario.update({z:w})
for x in diccionario.items():
    print(x)
lista=diccionario.values()
print(max(lista), min(lista),sum/len)

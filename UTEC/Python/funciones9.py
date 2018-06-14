def contar_palabras(texto):
    x=0
    y=texto.split("")
    for z in y:
        if z.strip() !="":
            x+=1
    return x
a= "hola que tal"
print(contar_palabras(a))

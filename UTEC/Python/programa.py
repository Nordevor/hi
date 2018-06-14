x=int(input("Ingrese un numero: "))
y=int(input("Ingrese un numero: "))
z=int(input("Ingrese un numero: "))

if x<y:
    if x<z:
        print("El menor valor es: ", x)
elif y<x:
    if y<z:
        print("El menor valor es: ", y)
elif z<x:
    if z<y:
        print("El menor valor es: ", z)

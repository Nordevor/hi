a=input("Que desea convertir")
b=int(input("Temperatura"))
def kelvin(x):
    a= x+273.15
    return a
def celsius(x):
    a=x-273.15
    return a
if a=="kelvin":
    print(kelvin(b))
elif a=="celsius":
    print(celsius(b))

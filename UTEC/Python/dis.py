import math

a= int(input("Ingresar un numero: "))
b= int(input("Ingresar un numero: "))
c= int(input("Ingresar un numero: "))
d= int(input("Ingresar un numero: "))

dist= math.sqrt((b-a)**2)+((d-c)**2)
pm1=(a+b)/2
pm2=(c+d)/2

print ("la distancia es: ", dist)
print ("el punto medio es:", pm1,"y",pm2|)

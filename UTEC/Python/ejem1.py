x = int(input("Ingresar numero de tres digitos: "))

y= x//100
z=(x-(y*100))//10
w= x-(y*100)-(z*10)
suma=(w+z+y)

print (suma)

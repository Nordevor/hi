#pregunta 1
nombre_correcto=False
while not nombre_correcto:
	nombre = str(raw_input("Insertar nombre: "))
	try:
		assert nombre.isalpha()
		nombre_correcto=True
	except:
		nombre_correcto=False
		print nombre, "Nombre incorrecto. Intentelo de nuevo"

edad_correcto=False
while not edad_correcto:
	try:
		edad = int(raw_input("Insertar edad: "))
		assert edad > 0 and edad < 120
		edad_correcto=True
	except:
		edad_correcto=False
		print edad, "Edad no permitida. Intentelo de nuevo"

#pregunta 2
a = int(raw_input("Insertar un numero: "))
if a%3==0:
	print a, "Es divisible entre 3"
else: 
	print a, "No es divisible entre 3"

#pregunta 3
a = int(raw_input("Insertar un numero: "))
b = int(raw_input("Insertar un numero: "))
c = int(raw_input("Insertar un numero: "))
if a>b:
	if a>c:
		print a,"es el mayor"
	else:
		print c,"es el mayor"
elif b>c:
	print b,"es el mayor"
else:
	print c,"es el mayor"

#pregunta 4
z = int(raw_input("Insertar tu edad: "))
if z>0 and z<=12:
	print z,("Eres un niño")
elif z>=13 and z<18:
	print ("Eres un adolescente")
elif z>=18 and z<=64:
	print z,("Eres un adulto")
elif z>=65 and z<=120:
	print z,("Eres un anciano")
else:
	print z,("Edad erronea")

#a la hora de colocar el comando en el sublime text me sale error pero cuando lo pongo en el python me sale bien. SAbe porque pasa eso?

#pregunta 5
print "Reanudar"
print "Guardar"
print "Cargar"
print "Opciones"
print "Finalizar"
menu = str(raw_input("Escribe la inicial de lo que quieras ejecutar"))
if (menu=='r'):
	print "Decidiste reanudar el juego"
if (menu=='g'):
		print "Decidiste guardar el juego"
if (menu=='c'):
	print "Decidiste cargar el juego"
if (menu=='o'):
	print "Decidiste abrir las opciones del juego"
if (menu=='f'):
	print "Decidiste finalizar tu partida"

#pregunta 6
print "la siguiente operacion sera el calcular 1/x donde x es el numero que usted coloque."
numero_correcto=False
while not numero_correcto:
	try:
		numero=float(raw_input("Coloca un numero: "))
		assert numero!=0
		numero_correcto=True
	except ValueError:
		numero=0
		numero_correcto=False
		print "0 no puede ir en el denominador"
print "el numero ingresado ira al denominador"
respuesta= 1/numero
print "el resultado de la fraccion es: ", respuesta
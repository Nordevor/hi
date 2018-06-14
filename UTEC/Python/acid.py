x=int(input("ingrese el ph: "))
if x>=0 and x<=4:
    print("la solucion es acido fuerte")
elif x>=5 and x<=6:
    print("la solucion es acido debil")
elif x==7:
    print("la solucion es acido neutral")
elif x>=8 and x<=9:
    print("la solucion es acido debil")
elif x>=10 and x<=14:
    print("la solucion es acido fuerte")
else:
    print("El valor no es valido")

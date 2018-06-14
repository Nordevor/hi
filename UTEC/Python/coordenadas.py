x=int(input("ingrese coordenadas: "))
y=int(input("ingrese coordenadas: "))
if x!=0 and y!=0:
    if x>0 and y<0:
        print("primer cuadrante")
    elif x>0 and y<0:
        print("segundo cuadrante")
    elif x<0 and y<0:
        print("tercer cuadrante")
    else:
        print("cuarto cuadrante")
else:
    print("estan en el origen")

a=input("ingrese frase: ")

i=0
c=0
for i in range(0,len(a)):
    c+=ord(a[i].upper())-64
print(c)

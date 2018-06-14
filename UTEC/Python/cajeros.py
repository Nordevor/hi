x=int(input("Ingresa el dinero total: "))

b=x//50
c=(x%50)//20
d=((x%50)%20)//10
e=(((x%50)%20)%10)//5
f=((((x%50)%20)%10)%5)//1

print ("Blilletes de 50:",b)
print ("Blilletes de 20:",c)
print ("Blilletes de 10:",d)
print ("monedas de 5:",e)
print ("Monedas de 1:",f)

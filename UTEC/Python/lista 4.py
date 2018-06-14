i=0
medidas=[12,11,13,14,10]
desviacion=[]
prom=sum(medidas)/len(medidas)
while i<len(medidas):
    x=abs(medidas[i]-prom)
    desviacion.append(x)
    i+=1
print(desviacion)

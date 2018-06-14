a=int(input(""))
b=int(input(""))
m=0
z=0
c=0
while (m<b):
    x=int(input(""))
    if x<3:
        c=0
    if x>=3 and x<12:
        c=a*0.2
    if x>=12 and x<65:
        c=a*0.8
    if x>=65:
        c=a*0.7
    z=z+c
    m+=1
print(z)


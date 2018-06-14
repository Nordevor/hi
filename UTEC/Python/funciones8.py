x=int(input(""))
y=int(input(""))
a=max(x,y)
b=min(x,y)
while b!=0:
    c=b
    b=a%b
    a=c
if c==1:
    c=0
print (c)

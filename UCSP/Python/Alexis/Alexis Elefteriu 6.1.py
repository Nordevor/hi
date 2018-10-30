#1
def quicksort(a):
   quicksort2(a,0,len(a)-1)
def quicksort2(a,b,c):
   if b<c:
       d = particion(a,b,c)
       quicksort2(a,b,d-1)
       quicksort2(a,d+1,c)
def particion(a,b,c):
   m=a[b]
   x=b+1
   y=c
   done=False
   while not done:
       while x<=y and a[x]<=m:
           x=x+1
       while a[y]>=m and y>=x:
           y=y-1
       if y<x:
           done=True
       else:
           temp=a[x]
           a[x]=a[y]
           a[y]=temp
   temp=a[b]
   a[b]=a[y]
   a[y]=temp
   return y
a = [3,2,6,5,4,9,87,10,1]
quicksort(a)
print(a)
#2
def merge(a,b):
  c=[]
  while len(a)!=0 and len(b)!=0:
    if a[0]<b[0]:
      c.append(a[0])
      a.remove(a[0])
    else:
      c.append(b[0])
      b.remove(b[0])
  if len(a)==0:
      c+=b
  else:
      c+=a
      #aumentar al valor de c a
  return c
def mergesort(d):
    if len(d)==0 or len(d)==1:
        return d
    else:
        middle=len(d)/2
        a=mergesort(d[:middle])
        b=mergesort(d[middle:])
    return merge(a,b)
d=[3,2,6,54,8]
print mergesort(d)
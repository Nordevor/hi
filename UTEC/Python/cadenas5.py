a=str(input(''))
if len(a)>2:
    for i in range(0,4):
        print(a[2:],end='')
        i+=1
else:
    print("error",end="")

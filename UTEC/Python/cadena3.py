def string(a,b):
    if len(a)<2:
        return ""
    c=a[0:2]+b[-2:]
    return c
print(string("hola","hilo"))

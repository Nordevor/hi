#pregunta 1
def dn(a):
  for e in range(a+1,a+11):
    print e
print dn(2)

#pregunta 2
def factorial(n):
  x=1
  for i in range(1,n+1):
    x=x*i
  return x
print factorial(5)

#pregunta 3
def tecito(n):
  a = int(raw_input("a : "))
  mayor = a
  for i in range(0,n-1):
    a = int(raw_input("a : "))
    if a > mayor:
      mayor = a
  return mayor

print tecito(20)

#pregunta 4

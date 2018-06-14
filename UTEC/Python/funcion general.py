import cmath
x=int(input("Ingrese a: "))
y=int(input("Ingrese b: "))
z=int(input("Ingrese c: "))

L= (-y+ cmath.sqrt((y**2)-4*x*z))/2*x
M= (-y- cmath.sqrt((y**2)-4*x*z))/2*x

print("en positivo es: ", L)
print("en negativo es: ", M)

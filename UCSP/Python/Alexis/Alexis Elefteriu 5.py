#pregunta 1
def factorizar(a):
	if a==1:
		return 1
	return a*factorizar(a-1)
#print factorizar(4)

#pregunta 2
def suma(a):
	if a==1:
		return 1
	return a+suma(a-1)
#print suma(4)

#pregunta 3
def ecua(c,d):
	if d==1:
		return c
	return c*ecua(c,d-1)
#print ecua(3,3)

#pregunta 4
def max(e):
	if len(e)>len(e)-1:
		return e.pop(len(e)-1)
	else:
		return e.pop(len(e))
	return e
#print max([1,5,4,6,3])
#es el que no me sale -.-

#pregunta 5
def u(f):
	if f==0:
		return 3
	return 3*u(f-1)+4
#print u(6)

#pregunta 6
def palindromo(g):
	h=g[::-1]
	if g==h:
		return "es palindromo"
	else:
		return "no es palindromo"
print (palindromo("sometamosomatemos"))
print (palindromo("lavanesabasenaval"))
print (palindromo("jose"))

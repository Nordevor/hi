def f(x):
    return g(x)+h(x)
def g(x):
    return 4*h(x)
def h(x):
    return x**2
print(f(2))

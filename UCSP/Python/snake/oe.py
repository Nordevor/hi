import time
import random
import copy
from Tkinter import *

lista = [['X','X','X','X','X'],
         ['X',' ',' ',' ','X'],
         ['X',' ',' ',' ','X'],
         ['X',' ',' ',' ','X'],
         ['X','X','X','X','X']
        ]
        
lista2 = ['X','X','X','X','X']

move = ""

root = Tk()

def imprimir(lista):
  for elements in lista:
    for element in elements:
      print element,
    print ''

def matriz2(mat, alto, ancho): #version usando append
  #primera fila
  lista = []
  for i in range(0, ancho): 
    lista.append('X')
  mat.append(lista)
  
  #filas intermedias
  for j in range(0, alto-2):
    lista = []
    lista.append('X')
    for i in range(0, ancho-2):
      lista.append(' ')
    lista.append('X')
    mat.append(lista)
  
  #ultima fila
  lista = []
  for i in range(0, ancho): 
    lista.append('X')
  mat.append(lista)

def cls():
  print('\n' * 50)

global mat
mat = [] #lista de listas = MATRIZ
alto = 20
ancho = 20

matriz2(mat, alto, ancho)
mat[4][4] = 'O'

global snake, snake_previo
snake = []
snake_previo = []

#screen.keypad(True)

comida_fila = random.randint(1,alto-2)
comida_columna = random.randint(1,ancho-2)
#comida_fila = 3
#comida_columna = 10

f = random.randint(1,alto-2) #fila donde esta el gusano
c = random.randint(1,ancho-2) #columna donde esta el gusano
#f = 3
#c = 3
snake.append([f,c]) 
options = ["up", "down", "left", "right"]

up_option=["right","left","up"]
down_option=["down","right","left"]
left_option=["left","up","down"]
right_option=["right","up","down"]

interaction = random.randint(0, 10) #numero de veces que se realiza un move

counter = 0
play = True
level = 1
score = 0
cambiarEscenario = False

def mecomi():
  global play
  for i in range (1, len(snake)):
    if snake[0] == snake[i]:
      play = False

def colisionParedes():
  global play
  if snake[0][1] == 0:
    play = False
  elif snake[0][1] == ancho-1:
    play = False
  elif snake[0][0] == 0:
    play = False
  elif snake[0][0] == alto-1:
    play = False

def Uinvertida(mat):
  
  x = random.randint(1, alto-1)
  y = random.randint(1, ancho-1)
  if y > 5:
    y -= 5
  if x > 3:
    x -= 3
  u = [[x,y], [x,y+1], [x,y+2], [x,y+3], [x,y+4], [x+1, y], [x+2, y], [x+1, y+4], [x+2, y+4]]
  for i in range(0, len(u)):
    X = u[i][0]
    Y = u[i][1]
    mat[X][Y] = 'X'

def leftKey(event):
    global move
    if move!="Right":
        move="Left"    

def rightKey(event):
    global move
    if move!="Left":
        move="Right"
        
def upKey(event):
    global move
    if move!="Down":
        move="Up"
    
def downKey(event):
    global move
    if move!="Up":
            move="Down"

def task():
  #print snake
  global comida_columna, comida_fila, move, play, score, level, cambiarEscenario
  #if counter == 0:
    #move = options[random.randint(0, len(options))-1]
    
    #print "El usuario apreto la tecla ", move 
    #print 
  #if(counter == interaction):
    #print "limite"
    #counter = -1
    #interaction = random.randint(0, 10) #numero de veces que se realiza un move
  #print play 
  if len(snake) == 10:
    level = 2
  #elif len(snake) == 15:
  #  level = 3
    
    #cambiarEscenario = True

  if(play == True):
    snake_previo = copy.deepcopy(snake)  

    mat = []
    matriz2(mat, alto, ancho)
    if move == "Up":
      snake[0][0] = snake[0][0] - 1
      if snake[0][0] == 0 and level == 1:
        snake[0][0] = alto - 2
    if move == "Down":
      snake[0][0] = snake[0][0] + 1
      if snake[0][0] == alto-1 and level == 1:
        snake[0][0] = 1
    if move== "Right":
      snake[0][1] = snake[0][1] + 1  
      if snake[0][1] == ancho-1 and level == 1:
        snake[0][1] = 1
    if move== "Left":
      snake[0][1] = snake[0][1] - 1 
      if snake[0][1] == 0 and level == 1:
        snake[0][1] = ancho-2


    #counter += 1 
    
    #f = random.randint(1,alto-2)    
    #c = random.randint(1,ancho-2)
    cabeza_fila = snake[0][0]
    cabeza_columna = snake[0][1]
    
    if(len(snake) > 1):
      for a in range(0, len(snake_previo)-1):
        snake[a+1] = snake_previo[a]    
    
    mecomi()    

    mat[cabeza_fila][cabeza_columna] = 'O'
    for j in range(1, len(snake)):
      fil = snake[j][0]
      col = snake[j][1]
      mat[fil][col] = 'O'
      
    #preguntamos si existe colision COMER
    if(cabeza_fila == comida_fila and cabeza_columna == comida_columna):
      snake.append([comida_fila, comida_columna])
      comida_fila = random.randint(1,alto-2)
      comida_columna = random.randint(1,ancho-2)
      score = len(snake)*10
    
    
    
    mat[comida_fila][comida_columna] = '*'
    print "SCORE: ", score, "LEVEL: ", level
    #if level == 1:
    if cambiarEscenario == True:
      Uinvertida(mat)
      cambiarEscenario = False
    imprimir(mat)
    if level == 2 or level == 3:
      colisionParedes()
  else:
    print "PERDISTE"
    root.quit()
  root.after(100,task)

frame=Frame(root, width=100, height=100)
root.bind('<Left>', leftKey)
root.bind('<Right>', rightKey)
root.bind('<Up>', upKey)
root.bind('<Down>', downKey)
frame.pack()
root.after(30,task)
root.mainloop()


#for i in range(0, 20000):
  #task()
  
  #time.sleep(0.2) 

        
  #print('\n' * 50)

  #os.system('cls')

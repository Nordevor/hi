from os import *
from time import *
from random import *
from Tkinter import *
from copy import *

x=randint(0,9)
y=randint(0,9)
root = Tk()
global mapp
direction=""
fruit=[]
mapp = []
tam = 10
for i in range(tam):
    c=[]
    for j in range(tam):
        c.append(" ")
    mapp.append(c)
global snake, snake_anterior
snake=[]
snake_anterior=[]
snake.append([5,3])
snake.append([5,3])
snake.append([5,3])

def collision(x,y):
    for i in range(1,len(snake)):
        if snake[i][1]==y and snake[i][0]==x:
            return True
    return False
def move():
    global direction
    x=0
    y=0
    if direction=="Left":
        x=-1
        sleep(0.05)
    elif direction=="Right":
        x=1
        sleep(0.05)
    elif direction=="Up":
        y=-1
        sleep(0.05)
    elif direction=="Down":
        y=1
        sleep(0.05)
    gameOver=False
    if collision(snake[0][1]+x,snake[0][0]+y):
        gameOver=True
    else:
        snake[0][1]+=x
        snake[0][0]+=y
    nivel_1()
    for i in range(len(snake)):
        mapp[snake[i][0]][snake[i][1]]="o"
    return gameOver

def printMat():
    global x,y
    if snake[0]==[x,y]:
        snake.append([x,y])
        x=randint(0,9)
        y=randint(0,9)
        fruit()
    for i in range(len(mapp)):
        for j in range(len(mapp)):
            print mapp[i][j]," ",             
        print "\n"

def clearMap():
    for i in range(len(mapp)):
        for j in range(len(mapp)):
            mapp[i][j] = " "


def nivel_1():
    if snake[0][0] < 0:
        snake[0][0] = tam - 1
    if snake[0][0] > tam - 1:
        snake[0][0] = 0
    if snake[0][1] < 0:
        snake[0][1] = tam - 1
    if snake[0][1] > tam - 1:
        snake[0][1] = 0

def fruit():
    global x,y
    mapp[x][y]="*"

def leftKey(event):
    global direction
    if direction!="Right":
        direction="Left"    

def rightKey(event):
    global direction
    if direction!="Left":
        direction="Right"
        
def upKey(event):
    global direction
    if direction!="Down":
        direction="Up"
    
def downKey(event):
    global direction
    if direction!="Up":
            direction="Down"
def task():
    # para windows
    # system("cls")
    #para linux
    global play
    system("clear") 
    snake_anterior=deepcopy(snake)#un clon
    for i in range(0, len(snake_anterior)-1):
        snake[i+1][0]= snake_anterior[i][0]
        snake[i+1][1]= snake_anterior[i][1]
    gameOver=move()

    fruit()
    printMat()
    clearMap()
    if not gameOver:
        root.after(100,task)
    else:
        print "You lose !"

def init():
    snake_anterior = deepcopy(snake) 

frame=Frame(root, width=100, height=100)
root.bind('<Left>', leftKey)
root.bind('<Right>', rightKey)
root.bind('<Up>', upKey)
root.bind('<Down>', downKey)
frame.pack()
root.after(30,task)
root.mainloop()
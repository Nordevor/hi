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
        c.append("_")
    mapp.append(c)
global snake, snake_anterior
snake=[]
snake_anterior=[]
snake.append([5,3])
snake.append([5,2])
snake.append([5,1])

def move():
    global direction
    if direction=="Left":
        snake[0][1]-=1
        sleep(0.05)
    if direction=="Right":
        snake[0][1]+=1
        sleep(0.05)
    if direction=="Up":
        snake[0][0]-=1
        sleep(0.05)
    if direction=="Down":
        snake[0][0]+=1
        sleep(0.05)
    nivel_1()
    for i in range(len(snake)):
        mapp[snake[i][0]][snake[i][1]]="o"

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

def colision_s():
  for i in range(1, len(snake)):
        if snake[0][0] == snake[i][0] and snake[0][1] == snake[i][1]:
            print "You Lose"
            root.quit()

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
    colision_s()
    system("clear") 
    snake_anterior=deepcopy(snake)#un clon

    for i in range(0, len(snake_anterior)-1):
        snake[i+1][0]= snake_anterior[i][0]
        snake[i+1][1]= snake_anterior[i][1]
    move()
    fruit()
    printMat()
    clearMap()
    root.after(100,task)

frame=Frame(root, width=100, height=100)
root.bind('<Left>', leftKey)
root.bind('<Right>', rightKey)
root.bind('<Up>', upKey)
root.bind('<Down>', downKey)
frame.pack()
root.after(30,task)
root.mainloop()

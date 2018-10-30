from os import *
from time import *
from random import *
from Tkinter import *
from copy import *


tam=20
x=randint(1,tam-2)
y=randint(1,tam-2)
root = Tk()
global mapp
direction="nada"
fruit=[]
mapp=[]

obstacles = []

global timer
timer = 0

c = []
for j in range(tam):
    c.append("x")
mapp.append(c)

for i in range(1, tam-1):
    c=[]
    
    for j in range(tam):
        c.append(" ")
    mapp.append(c)

c = []
for j in range(tam):
    c.append("x")
mapp.append(c)


global snake, snake_anterior
snake=[]
snake_anterior=[]
snake.append([5,3])
snake.append([5,2])
snake.append([5,1])

level = 1

def createObstacles():
    global obstacles
    num = randint(10, 30)
    for i in range(0, num):
        x_=randint(1,tam-2)
        y_=randint(1,tam-2)
        while x_ == x and y_ == y:
            x_=randint(1,tam-2)
            y_=randint(1,tam-2)
        while x_ == snake[0][0] and y_ == snake[0][1]:
            x_=randint(1,tam-2)
            y_=randint(1,tam-2)
        obstacles.append([x_, y_])

def drawObstacles():
    for i in range(0, len(obstacles)):
        mapp [obstacles[i][0]][obstacles[i][1]] = "X"

def colisionObs():
    for i in range(0, len(obstacles)):
        if snake[0][0] == obstacles[i][0] and snake[0][1] == obstacles[i][1]:
            print "You Lose"
            root.quit()

def move():
    global direction, timer
    if direction=="Left":
        timer+=1
        snake[0][1]-=1
        sleep(0.05)
    if direction=="Right":
        timer+=1
        snake[0][1]+=1
        sleep(0.05)
    if direction=="Up":
        timer+=1
        snake[0][0]-=1
        sleep(0.05)
    if direction=="Down":
        timer+=1
        snake[0][0]+=1
        sleep(0.05)
    #gameOver()
    if level == 1:
        nivel_1()
    elif level == 2:
        nivel_2()
    elif level == 3:
        nivel_3()
    for i in range(len(snake)):
        mapp[snake[i][0]][snake[i][1]]="o"


def printMat():
    global x,y
    if snake[0]==[x,y]:
        snake.append([-1,-1])
        x=randint(1,tam-2)
        y=randint(1,tam-2)
        
        counter = 0
        while counter == 0:
            
            for i in range(0, len(obstacles)):
                if x == obstacles[i][0] and y == obstacles[i][1]:
                    counter += 1
                    break
            if counter > 0:
                x=randint(1,tam-2)
                y=randint(1,tam-2)
                counter = 0
            elif counter == 0:
                counter = 1

        fruit()
    for i in range(len(mapp)):
        for j in range(len(mapp)):
            print mapp[i][j],             
        print 

def clearMap():
    for i in range(len(mapp)):
        for j in range(len(mapp)):
            if i == 0:
                mapp[i][j] = "X"
            elif i == tam-1:
                mapp[i][j] = "X"
            else:
                if j == 0 or j == tam-1:
                    mapp[i][j] = "X"
                else:
                    mapp[i][j] = " "

def nivel_1():
    if snake[0][0] == 0:
        snake[0][0] = tam - 2
    if snake[0][0] > tam - 1:
        snake[0][0] = 1
    if snake[0][1] == 0:
        snake[0][1] = tam - 2
    if snake[0][1] == tam - 1:
        snake[0][1] = 1

def nivel_2():
    if snake[0][0] == 0:
        print "You Lose"
        root.quit()
    if snake[0][0] == tam - 1:
        print "You Lose"
        root.quit()
    if snake[0][1] == 0:
        print "You Lose"
        root.quit()
    if snake[0][1] == tam - 1:
        print "You Lose"
        root.quit()

def nivel_3():
    if snake[0][0] == 0:
        print "You Lose"
        root.quit()
    if snake[0][0] == tam - 1:
        print "You Lose"
        root.quit()
    if snake[0][1] == 0:
        print "You Lose"
        root.quit()
    if snake[0][1] == tam - 1:
        print "You Lose"
        root.quit()

def fruit():
    global x,y
    mapp[x][y]="*"

def leftKey(event):
    global direction, timer
    if direction!="Right":
        timer = 0
        direction="Left"    

def rightKey(event):
    global direction, timer
    if direction!="Left":
        timer = 0
        direction="Right"
        
def upKey(event):
    global direction, timer
    if direction!="Down":
        timer = 0
        direction="Up"
    
def downKey(event):
    global direction, timer
    if direction!="Up":
            timer = 0
            direction="Down"
def colision_s():
    global snake
    for i in range(1, len(snake)):
        if snake[0][0] == snake[i][0] and snake[0][1] == snake[i][1]:
            
            print "You Lose"
            root.quit()
#def gameOver(): 
#    if colision_s()==True:
#        print "You Lose"
#        root.quit()

def task():
    #system("clear") 
    global direction, timer

    colision_s()
    

    if direction != "nada":
        snake_anterior=deepcopy(snake)
        for i in range(len(snake_anterior)-1):
            snake[i+1][0]= snake_anterior[i][0]
            snake[i+1][1]= snake_anterior[i][1]
    
    
    drawObstacles()        

    move()
    colisionObs()
    fruit()
    printMat()
    clearMap()
    root.after(200,task)


frame=Frame(root, width=100, height=100)
root.bind('<Left>', leftKey)
root.bind('<Right>', rightKey)
root.bind('<Up>', upKey)
root.bind('<Down>', downKey)
frame.pack()

level = int(raw_input("Inserte un nivel:"))
if level == 3:
    createObstacles()
    
root.after(30,task)
root.mainloop()

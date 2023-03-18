#derping around with turtle graphics
import turtle as t
import random

def cl(x,y):
    t.clear()
    scribble(None,None)
    #t.bye()

def randots(x,y):
    t.penup()
    for _ in range(1000):
        t.pencolor((random.random(),random.random(),random.random()))
        n, m = random.random()*1000, random.random()*1000
        t.goto(n,m)
        t.pendown()
        if 1000-n-m < 0:
            t.goto(n+3,m)
        else:
            t.goto(n,m+3)
        t.penup()

def gotoscribble(x,y):
    t.goto(x,y)
    scribble(None,None)

def scribble(x,y):
    t.goto(random.random()*1000,random.random()*1000)
    t.pendown()
    for _ in range(100):
        t.goto(random.random()*1000,random.random()*1000)


t.setworldcoordinates(0,0,1000,1000)
t.hideturtle()
t.speed(0)
t.penup()
scribble(None,None)

t.onscreenclick(scribble,1)
t.onscreenclick(cl,3)

t.mainloop()

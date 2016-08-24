

        




import turtle
import math
t=turtle.Turtle()
    
screen=t.getscreen()
def a(z):
    t.forward(z)

def b(k):
    t.left(k)

def c(j):
    t.right(j)
    

for q in range(1,300):
    a(110+q/10)
    b(50-q/5)
    a(50+q/3)
    b(77)
    a(55)
    c(50-q/2)
    a(200+q/6)
    b(150)
    a(math.sin(q))
    
    


screen.exitonclick()
      




        




import turtle
t=turtle.Turtle()
    
screen=t.getscreen()
def a(z):
    t.forward(z)

def b(k):
    t.left(k)

def c(j):
    t.right(j)
    

for q in range(1,300):
    a(10-q/20)
    b(50+q/5)
    a(10+q/3)
    c(50+q/2)
    a(10+q/6)
    b(111)
    
    


screen.exitonclick()
      


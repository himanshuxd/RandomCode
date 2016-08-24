

        




import turtle
import random
t=turtle.Turtle()
    
screen=t.getscreen()
def a(z):
    t.forward(z)

def b(k):
    t.left(k)

def c(j):
    t.right(j)
    
def koch(i):
    for g in range(1,38) :
        q=random.randint(1,77)
        a(30-q*2)
        b(90+q/10)
        a(q)
        c(170-q)
        a(15+q)
        b(q*2)
        a(15/q)
        b(q+12)
        a(22-q)


def main():
    koch(2)


    print(main())


    
    
    


screen.exitonclick()
      


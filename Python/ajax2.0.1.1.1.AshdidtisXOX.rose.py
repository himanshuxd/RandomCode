

        




import turtle
t=turtle.Turtle()
    
screen=t.getscreen()
a=['','','','','','','','','','','','','','','','']
x=10
for b in range(1,1000):
    t.forward(x)
    t.left(100-x/20)
    x+=1

    
screen.exitonclick()
      


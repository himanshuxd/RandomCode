

        




import turtle
t=turtle.Turtle()
    
screen=t.getscreen()
a=['','','','','','','','','','','','','','','','']
x=10
for b in range(1,200):
    t.forward(x)
    t.left(90-x/2)
    x+=1

    
screen.exitonclick()
      


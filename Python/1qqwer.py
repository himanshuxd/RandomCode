from turtle import *

def rep(seq,reprule,n):
    for i in range(n):
        newseq=""
        for elem in seq:
            newseq += reprule.get(elem,elem)
            seq=newseq
            return seq

def draw(commands,rules):
    for c in commands:
        try:
            rules[c]()

        except TypeError:
                try:
                    draw(rules[c],rules)
                except:
                    pass

def main():

    def r():
        right(45)

    def l():
        left(45)

    def f():
        forward(8)

    def b():
        backward(8)

    snake_rulez = {"-":l,"+":r,"f":f,"b":b}
    snake_reprulez = {"c":"b-f-+f+f"}
    snake_start = "f"


    drawing = replace(snake_start,snake_reprulez,3)

    reset()
    speed(4)
    tracer(1,0)
    ht()
    up()
    backward(195)
    down()
    draw(drawing,snake_rulez)

    return "Done!!!!!@#Ash10king.Xo"

msg=mainloop()
print(msg)

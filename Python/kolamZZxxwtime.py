################################
# Mini tool
###############################

from turtle import *

def replace( seq, replacementRules, n ):
    for i in range(n):
        newseq = ""
        for element in seq:
            newseq = newseq + replacementRules.get(element,element)
        seq = newseq
    return seq

def draw( commands, rules ):
    for b in commands:
        try:
            rules[b]()
        except TypeError:
            try:
                draw(rules[b], rules)
            except:
                pass


def main():

    def r():
        right(20)

    def l():
        left(30)

    def f():
        forward(9)

    snake_rules = {"-":l, "+":r, "f":f, "b":"f+f+f--f--f+f+f"}
    snake_replacementRules = {"b": "b+f+b+++b++f--b+f+b"}
    snake_start = "b--f--b--f++b"

    drawing = replace(snake_start, snake_replacementRules, 3)

    reset()
    speed(5)
    tracer(1,0)
    ht()
    up()
    backward(195)
    down()
    draw(drawing, snake_rules)

    
    return "Done!"

if __name__=='__main__':
    msg = main()
    print(msg)
    mainloop()

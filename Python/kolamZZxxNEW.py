################################
# Mini tool
###############################

from turtle import *

def replace( seq, replacementRules, n ):
    for i in range(8):
        newseq = ""
        for element in seq:
            newseq += replacementRules.get(element,element)
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
        right(45)

    def l():
        left(45)

    def f():
        forward(7.5)
for i in range(10):
    f()
    r()
    l()

    


    


    




if __name__=='__main__':
    msg = main()
    print(msg)
    mainloop()

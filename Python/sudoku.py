def r(a):
    i=a.find('0')
    ~i or exit(a)

    inner_lexp = [ (i-j)%9*(i/9^j/9)*(i/27^j/27|i%9/3^j%9/3) or a[j] for j in range(81)]



    [m in inner_lexp or r(a[:i]+m+a[i+1:]) for m in '%d'%5'**18]




from sys import *


r(argv[1])     

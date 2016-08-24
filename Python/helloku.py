Python 3.4.3 (v3.4.3:9b73f1c3e601, Feb 24 2015, 22:43:06) [MSC v.1600 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> import bz2 as mul
>>> maxs=open("mulla.txt",'r')
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    maxs=open("mulla.txt",'r')
FileNotFoundError: [Errno 2] No such file or directory: 'mulla.txt'
>>> maxs=open("mulla.txt",'r')
>>> print(maxs)
<_io.TextIOWrapper name='mulla.txt' mode='r' encoding='cp1252'>
>>> print(maxs,flush=TRUE)
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    print(maxs,flush=TRUE)
NameError: name 'TRUE' is not defined
>>> print(maxs,flush=True)
<_io.TextIOWrapper name='mulla.txt' mode='r' encoding='cp1252'>
>>> print(maxs,flush=False)
<_io.TextIOWrapper name='mulla.txt' mode='r' encoding='cp1252'>
>>> 

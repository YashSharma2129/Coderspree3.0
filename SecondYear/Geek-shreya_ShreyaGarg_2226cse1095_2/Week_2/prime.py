from math import *
from collections import *
from sys import *
from os import *

n = int(input())
if n == 1:
    print("NO")
elif n > 1:
   for i in range(2,n):
       if (n % i) == 0:
           print("NO")
           break
   else:
       print("YES")

else:
   print("NO")
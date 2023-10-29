from os import *
from sys import *
from collections import *
from math import *

n = int(input())
num = n
digit, sum = 0, 0
length = len(str(num))
for i in range(length):
  digit = int(num%10)
  num = num/10
  sum += pow(digit,length)
if sum==n:
  print("true")
else:
  print("false")
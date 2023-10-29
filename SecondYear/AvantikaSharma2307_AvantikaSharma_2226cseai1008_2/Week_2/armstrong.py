from os import *
from sys import *
from collections import *
from math import *
n=int(input())
a=n
b=n
sum1=0
count=0
while(n!=0):
    r=n%10
    count=count+1
    n=n//10
    
while(b!=0):
    r=b%10
    sum1=sum1+pow(r,count)
    b=b//10
if(sum1==a):
    print ("true")
else:
    print ("false")    

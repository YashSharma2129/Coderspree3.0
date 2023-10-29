from typing import *

def factorial(n: int) ->int:
    fact=1
    for i in range(1,n+1,1):
        fact=fact*i
    return fact



def factorialNumbers(n: int) -> List[int]:
    # Write your code here
    List=[]
    for i in range(1,n+1,1):
        if(factorial(i)<=n):
            List.append(factorial(i))
        else:
            break    
    return List

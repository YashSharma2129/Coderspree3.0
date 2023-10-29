from typing import List

def generateFibonacciNumbers(n: int) -> List[int]: 
    # Write your code here
    a=-1
    b=1
    i=1
    List=[]
    while(i<=n):
            c=a+b       
            a=b
            b=c
            List.append(c)
            i=i+1

    return List        
from typing import *

def factorialNumbers(n: int) -> List[int]:
    fact = 1
    x = 2
    li = []
    while fact <= n:
        a = li.append(fact)
        fact = fact * x
        x += 1



    return li
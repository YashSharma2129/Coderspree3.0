def countDigits(n: int) -> int:
    c = 0
    num = n 
    while(num!=0):
        d = num%10
        num //= 10

        if d>0 and n%d==0:
            c+=1
            
    return c
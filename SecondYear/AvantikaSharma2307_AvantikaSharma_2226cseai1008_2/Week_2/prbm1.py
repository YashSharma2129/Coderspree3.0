def countDigits(n: int) -> int:
    a=n
    count=0
    while (n!=0):
        r=n%10
        if((a%r==0)and(r>0)):
            count=count+1
        n=n//10
    return count        
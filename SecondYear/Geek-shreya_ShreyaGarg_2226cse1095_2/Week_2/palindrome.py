n=int(input()) 
temp = n
rev_n = 0

while n != 0:
    digit = n % 10
    rev_n = rev_n * 10 + digit
    n //= 10
if(temp == rev_n):
    print("true")
else:
    print("false")
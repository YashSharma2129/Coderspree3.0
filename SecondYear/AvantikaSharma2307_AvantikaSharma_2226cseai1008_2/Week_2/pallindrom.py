n=int(input())  
# taking n as a input 
## write your code !!
a=n
sum1=0
while(n!=0):
    r=n%10
    sum1=sum1*10+r
    n=n//10
if(a==sum1):
    print("true")
else:
    print("false")        

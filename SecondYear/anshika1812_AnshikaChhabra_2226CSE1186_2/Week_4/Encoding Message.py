t=int(input("Enter no. of test cases: "))
while(t!=0):
    code=""
    i=0
    msg=input("Enter message: ")
    while(i<=len(msg)-1):
        if(i==len(msg)-1):
            code+=msg[i]+"1"
            break
        count=1
        while(msg[i]==msg[i+1]):
            count+=1
            i+=1
        code+=msg[i]+str(count)
        i+=1
    print(code)
    t-=1
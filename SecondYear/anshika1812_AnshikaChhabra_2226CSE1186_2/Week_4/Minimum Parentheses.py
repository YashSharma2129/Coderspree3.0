t=int(input("Enter no. of test cases: "))
while(t!=0):
    seq=input("Enter sequence of parentheses: ")
    open=close=min=0
    for i in seq:
        if(i==')'):
            close+=1
            if(open>=close):
                open-=1
                close-=1
            else:
                min+=1
                close-=1
        else:
            open+=1
    print(min+open)
    t-=1
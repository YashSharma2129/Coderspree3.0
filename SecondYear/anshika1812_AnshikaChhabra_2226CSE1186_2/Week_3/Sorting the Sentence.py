l=list(input("Enter the shuffled sentence: ").split(" "))
for i in range(0,len(l)-1):
    if(l[i][-1]>l[i+1][-1]):
        temp=l[i]
        l[i]=l[i+1]
        l[i+1]=temp
for i in range(0,len(l)):
    for j in range(0,len(l[i])-1):
        print(l[i][j],end="")
    print(" ",end="")
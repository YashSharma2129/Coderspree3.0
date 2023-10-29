n=int(input("Enter length: "))
l=[]
i=0
print("Enter elements: ")
for i in range(n):
    l.append(int(input()))
i=1
while(1):
    if(l.count(i)==0):
        print(i)
        break
    i+=1

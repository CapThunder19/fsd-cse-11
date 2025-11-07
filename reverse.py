a = int (input("enter number: "))
sum = 0
while(a!=0):
    n = a%10
    sum = sum*10 + n
    a = a//10 

print(sum)


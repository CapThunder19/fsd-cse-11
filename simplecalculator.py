a = int(input("enter no."))
b = int(input("enter no."))
c = input("enter your character")

if c == '+':
    print(a + b)
elif c == '-':
    print(a - b)
elif c == '*':
    print(a * b)
elif c == '/':
    print(a / b)
else:
    print("invalid operator")

cp = int(input("Enter cp "))
sp = int(input("Enter sp "))
if cp > sp:
    print("Profit")
elif cp < sp:
    print("Loss")
else:
    print("No Profit or Loss")
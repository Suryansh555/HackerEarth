n=int(input())

note=[]

coin=[]

for i in range(n):
    a=input().split()
    if a[0]=="Note":
        note.append(a[1])
    elif a[0]=='Coin':
        coin.append(a[1])
print("Coins :")
for j in range(len(coin)):
    print(coin[j])
print("Notes :")
for j in range(len(note)):
    print(note[j])
t = int(input())
while t:
    x = 1
    n = int(input())
    while x*2-1<=n:
        x = x * 2
    print(x-1)
    t = t-1;
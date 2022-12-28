def solve (S, k):       
    u = 0       
    for i in S:            
        if i == k:                  
            u = u + 1        
    return u

T = int(input())
for _ in range(T):
    S = input()
    k = input()

    out_ = solve(S, k)
    print (out_)
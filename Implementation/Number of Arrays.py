from sys import stdin, stdout


 

def run():

#answer = []
    t = int(stdin.readline())
    for i in range (0, t):
        n, k, q = map(int, stdin.readline().strip().split())
        v = [int(y) for y in stdin.readline().strip().split()]
        min_el, max_el = min(v), max(v)
        if k == 1:
            if max_el < q:
                stdout.write(str(max_el))
            else:
                stdout.write('NO')
        else:
            if min_el < q:
                stdout.write(str(min_el))
            else:
                stdout.write('NO')
        stdout.write('\n')


 

if __name__ == '__main__':
    run()
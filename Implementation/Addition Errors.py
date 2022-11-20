def addwithoutcarry(a, b):

  n, m = len(str(a)), len(str(b))

  r = min(n, m)

  res = ""

  while (a or b):

    s = str(a % 10 + b % 10)

    if (len(s) > 1):

      res = s[1] + res

    else:

      res = s + res

    a //= 10

    b //= 10

  return res

 

t = int(input())

for _ in range(t):

   a = int(input())

   b = int(input())

   print((a + b) - int(addwithoutcarry(a, b)))
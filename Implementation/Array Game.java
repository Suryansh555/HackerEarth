import java.util.Scanner;

 

public class Main{

 

private final static long N = (long) (1e5 + 5);

 

private static long n;

private static long cnt = 0;

private static long[] a = new long[(int) N];

private static long[] pref = new long[(int) N];

private static long[] suf = new long[(int) N];

 

public static void main(String[] args)

{

 Scanner sc=new Scanner(System.in);

 

 long t;

 t = Long.parseLong(sc.next());

 while ((t--) != 0)

 {

cnt = 0;

n = Long.parseLong(sc.next());

for (int i = 1;i <= n;i++)

{

  a[(int) i] = Long.parseLong(sc.next());

  pref[i] = Math.max(pref[i - 1], a[i]);

}

suf[(int) (n + 1)] = (long) 1e9;

for (long i = n;i >= 1;i--)

{

  suf[(int) i] = Math.min(suf[(int) (i + 1)], a[(int) i]);

}

for (long i = 1;i <= n - 1;i++)

{

  if (pref[(int) i] < suf[(int) (i + 1)])

  {

 cnt++;

  }

}

if ((cnt % 2) != 0)

{

  System.out.print("Jeel");

  System.out.print(DefineConstants.endl);

}

else

{

  System.out.print("Ashish");

  System.out.print(DefineConstants.endl);

}

 }

}

 

final class DefineConstants

{

public static final String endl = "\n";

}

 

}
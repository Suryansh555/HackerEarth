import java.util.Scanner;

 

public class Main

{

 

 

public static final int N = (int) (1E3 + 5);

public static String[] mat = new String[N];

 

public static boolean f(int x, int y, int n, int m)

{

 for (int i = x; i < x + 8; i++)

 {

  for (int j = y; j < y + 7; j++)

  {

   if (mat[i].charAt(j) == mat[i].charAt(j + 1) || (i < x + 7 && mat[i].charAt(j) == mat[i + 1].charAt(j)))

   {

    return false;

   }

  }

 }

 return true;

}

 

public static void main(String[] args)

{

 Scanner sc=new Scanner(System.in);

 int n;

 int m;

 n = Integer.parseInt(sc.next());

 m = Integer.parseInt(sc.next());

 for (int i = 0; i < n; i++)

 {

  mat[i] = sc.next();

 }

 int cnt = 0;

 for (int i = 0; i < n; i++)

 {

  for (int j = 0; j < m; j++)

  {

   if (i + 8 <= n && j + 8 <= m && f(i, j, n, m))

   {

    cnt++;

   }

  }

 }

 System.out.print(cnt);

}

}

 

 
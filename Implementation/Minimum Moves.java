import java.util.Scanner;

class TestClass {

public static void main(String args[] ) throws Exception

{

Scanner sc = new Scanner(System.in);

int t = sc.nextInt();

int count = 0;

while(t-->0)

{

int x = sc.nextInt();

int y = sc.nextInt();

if(x<0 || y<0 || x<y)

{

System.out.println("-1");

}

else

{

System.out.println(x);

}


 

}

 

}

}


 
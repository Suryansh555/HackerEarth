import java.util.*;

class TestClass {

public static void main(String args[] ) throws Exception {

Scanner sc = new Scanner(System.in);

int n = sc.nextInt();

int k = sc.nextInt();

int[] a = new int[n];

int i;

for(i=0;i<n;i++)

{

a[i]=sc.nextInt();

}

i=0;

while(i<(n-k+1))

{

int j=1,sum=0;

while(j<=k)

{

sum = sum + j*j*a[i+j-1];

j++;

}

System.out.print(sum+" ");

i++;

}

}

}


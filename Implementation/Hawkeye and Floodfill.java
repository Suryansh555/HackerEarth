import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.util.StringTokenizer;

class TestClass {

public static void main(String args[] ) throws Exception {

BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

int m = Integer.parseInt(br.readLine());

int[][] arr = new int[m][m];

StringTokenizer st = new StringTokenizer(br.readLine());

int n1 = Integer.parseInt(st.nextToken());

int n2 = Integer.parseInt(st.nextToken());

int po = Integer.parseInt(st.nextToken());

for(int i=0; i<m; i++) {

for(int j=0; j<m; j++) {

int val = po - Math.max(Math.abs(n1-i), Math.abs(n2-j));

if(val<0) System.out.print("0 ");

else System.out.print(val+" ");

}

System.out.println();

}

}

}
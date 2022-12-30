import java.io.*;
class TestClass {
public static void main(String args[] ) throws Exception {
BufferedReader scan=new BufferedReader(new InputStreamReader(System.in));
int T=Integer.parseInt(scan.readLine());
StringBuilder out=new StringBuilder();
long prime[]=new long[2000001];
for(int i=2;i<prime.length;i++){
int j=2;
if(prime[i]==0){
prime[i]=1;
while((i*j)<prime.length){
prime[i*j]++;
j++;
}
}
}
while(T-->0){
String str[]=scan.readLine().split(" ");
int N=Integer.parseInt(str[0]);
int M=Integer.parseInt(str[1]);
long tot=0;
if(N>M){
int temp=N;
N=M;
M=temp;
}
int lim=N+M;
long cnt=1;
for(int i=2;i<=lim;i++){
tot=tot+(cnt*prime[i]);
if((i-1)<N){
cnt++;
}else if((i-1)>=M){
cnt--;
}
 
}
out.append(tot);
out.append("\n");
}
System.out.println(out);
}
}
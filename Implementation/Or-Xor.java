import java.io.*;
import java.util.*;
import java.math.*;
 
public class Main{
 
static boolean ONLINE_JUDGE = false;//change before submit
static Fast f = new Fast();
static PrintWriter out = new PrintWriter(System.out);
static boolean TEST_CASES = true;
 
 
static void solve() {
 
int n = ri();
int[] a = ra(n);
int ans = 1;
for(int i = 30; i > -1; i--) {
int count = 0;
for(int x: a) {
if((((1<<i)&x))>0) count++;
}
if(count!=0 && count!=n) ans *= 2;
}
 
out.println(ans);
 
/* WARNING : change [ONLINE_JUDGE = false] before SUBMIT */
}
 
public static void main(String[] args)throws Exception{
 
out = ONLINE_JUDGE? new PrintWriter(new BufferedWriter(new FileWriter("output.txt"))):new PrintWriter(System.out);
 
if(TEST_CASES){
 
int t = f.nextInt();
 
while(t-->0){
 
solve();
 
}
 
}
 
else {
 
solve();
 
}
 
out.close();
 
}
 
 
 
static int ri() {
 
return f.nextInt();
 
}
 
static long rl() {
 
return f.nextLong();
 
}
 
static String rs(){
 
return f.next();
 
}
 
static String rS(){
 
return f.nextLine();
 
}
 
static char rc(){
 
return f.next().charAt(0);
 
}
 
static int[] ra(int n) {
 
int[] a = new int[n];
for(int i = 0;i<n;i++) a[i] = ri();
return a;
 
}
 
static char[] rac(){
 
char[] c = rs().toCharArray();
 
return c;
 
}
 
static int[][] rm(int n, int m){
 
int[][] mat = new int[n][m];
 
for(int i = 0; i < n; i++) mat[i] = ra(m);
 
return mat;
 
}
 
static char[][] rmc(int n){
 
char[][] cmat = new char[n][];
 
for(int i = 0; i < n;) cmat[i] = rac();
 
return cmat;
 
}
 
static void sort(int[] a) {
 
ArrayList<Integer> list=new ArrayList<>();
for (int i:a) list.add(i);
Collections.sort(list);
for (int i=0; i<a.length; i++) a[i]=list.get(i);
 
}
 
static class Fast{
public BufferedReader br;
public StringTokenizer st;
 
public Fast(){
try{
br = ONLINE_JUDGE? (new BufferedReader(new FileReader("input.txt"))):(new BufferedReader(new InputStreamReader(System.in)));
}
catch(Exception e){
throw new RuntimeException(e);
}
}
 
String next(){
while(st==null || !st.hasMoreTokens()){
try{
st=new StringTokenizer(br.readLine());
}
catch(IOException e){
throw new RuntimeException(e);
}
 
}
return st.nextToken();
}
int nextInt(){
return Integer.parseInt(next());
}
 
long nextLong(){
return Long.parseLong(next());
}
 
double nextDouble(){
return Double.parseDouble(next());
}
 
String nextLine()
{
String str = "";
try
{
str = br.readLine();
}
catch (IOException e)
{
e.printStackTrace();
}
return str;
}
 
}
}
import java.io.*;
import java.util.*;
 
public class TestClass {
 
public static void solve(InputReader in, PrintWriter out) {
int t = in.nextInt();
while (t-- > 0) {
int n = in.nextInt();
int a = in.nextInt();
int b = in.nextInt();
String st = in.next();
char[] res = new char[n];
int x = 0, y = 0, ans = 0;
for (int i = 0; i < n; i++) {
res[i] = st.charAt(i);
if (st.charAt(i) == '0') {
x++;
} else if (st.charAt(i) == '1') {
y++;
}
}
if (x < a) {
for (int i = 0; i < n && x < a; i++) {
if (res[i] == '1' && y > b) {
res[i] = '0';
x++;
y--;
ans++;
}
}
for (int i = 0; i < n && x < a; i++) {
if (res[i] == '2') {
res[i] = '0';
x++;
ans++;
}
}
}
if (y < b) {
int c = 0;
for (int i = 0; i < n && y < b; i++) {
if (res[i] == '0') {
c++;
if (c > a && x > a) {
res[i] = '1';
x--;
c--;
y++;
ans++;
}
}
}
for (int i = 0; i < n && y < b; i++) {
if (res[i] == '2') {
res[i] = '1';
y++;
ans++;
}
}
}
for (int i = n - 1; i >= 0 && x > a; i--) {
if (res[i] == '0') {
res[i] = '2';
x--;
ans++;
}
}
for (int i = n - 1; i >= 0 && y > b; i--) {
if (res[i] == '1') {
res[i] = '2';
y--;
ans++;
}
}
out.println(ans);
out.println(String.copyValueOf(res));
}
}
 
public static void main(String[] args) {
InputStream inputStream = System.in;
OutputStream outputStream = System.out;
InputReader in = new InputReader(inputStream);
PrintWriter out = new PrintWriter(outputStream);
solve(in, out);
out.close();
}
 
static class InputReader {
public BufferedReader reader;
public StringTokenizer tokenizer;
 
public InputReader(InputStream stream) {
reader = new BufferedReader(new InputStreamReader(stream), 32768);
tokenizer = null;
}
 
public String next() {
while (tokenizer == null || !tokenizer.hasMoreTokens()) {
try {
tokenizer = new StringTokenizer(reader.readLine());
} catch (IOException e) {
throw new RuntimeException(e);
}
}
return tokenizer.nextToken();
}
 
public int nextInt() {
return Integer.parseInt(next());
}
 
public long nextLong() {
return Long.parseLong(next());
}
 
}
}
#include <cstdio>
#include <string>
#include <iostream>
#include <cassert>
 
using namespace std;
 
#define MAXT 50
#define MAXL 1000
 
string keys[10] = {"_0", ".,?!1", "abc2", "def3", "ghi4", "jkl5", "mno6", "pqrs7", "tuv8", "wxyz9"};
 
bool valid(char s){
 if (s=='.' or s==',' or s=='?' or s=='!' or s=='_')
 return true;
 if (s>='a' and s<='z')
 return true;
 if (s>='0' and s<='9')
 return true;
 return false;
}
 
int getPos(char c){
 for(int i=0;i<10;i++){
 for (int j=0;j<keys[i].size();j++)
 if(keys[i][j]==c)
 return i;
 }
}
 
int press(char c, int p){
 for(int i=0;i<keys[p].size();i++)
 if(keys[p][i]==c)
 return i+1;
}
 
int main(){
 int T, len, ans, pos, newpos;
 string S;
 scanf("%d", &T);
 assert(T>0 and T<=MAXT);
 while(T--){
 cin >> S;
 len = S.size();
 assert(len>0 and len<=MAXL);
 
 ans = 0;
 pos = 1;
 for(int i=0;i<len;i++){
 assert(valid(S[i]));
 newpos = getPos(S[i]);
 if(newpos!=pos)
 ans++;
 pos = newpos;
 ans = ans + press(S[i], pos);
 }
 printf("%d\n", ans);
 }
}
#include <bits/stdc++.h>

#define ll long long

#define endl '\n'

const int mod = 1e9 + 7;

using namespace std;

 

int main() {

 

   int t;

   cin>>t;

   while(t--){

   string s;

   cin>>s;

   string a="OO";

   string flag="OO";

   a+=s;

   a+=flag;  //a becomes something like OOsOO

   int cnt=0;

   int n=a.length();

   for(int i=2;i<a.length()-2;i++){

       if(a[i]=='B'){

          if(a[i-1]=='W'){

               a[i-1]='x';

               cnt++;

          }

           if(a[i-2]=='W'){

               a[i-2]='x';

               cnt++;

          }

           if(a[i+1]=='W'){

               a[i+1]='x';

               cnt++;

          }

           if(a[i+2]=='W'){

               a[i+2]='x';

               cnt++;

          }

       }

   }

   //cout<<a<<endl;

   cout<<cnt<<endl;

 

   }

 return 0;

}

 
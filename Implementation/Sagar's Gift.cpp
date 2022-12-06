#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
cin>>arr[i];
string str;
for(int i = 0;i<N;i++)
//to convert integer to string type 
  str=str + to_string(arr[i]);
//sort string by character 
sort(str.begin(),str.end());
//Reverse string 
reverse(str.begin(),str.end());
cout<<str<<endl;
}
}
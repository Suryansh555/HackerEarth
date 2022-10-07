#include<bits/stdc++.h>

using namespace std;

bool zeroHai(string str )

{

if((str.find('0') != std::string::npos))

return true;

else

return false;

}

long long int sumofdigits(int n)

{

long long int sum=0;

while(n>0)

{

/* if(n%10==0)

{

break;

} */

sum+=n%10;

n=n/10;

}

return sum;

 

}

long long int beautyfactor(long long int n)

{

if(n<10)

return n;

else

return beautyfactor(sumofdigits(n)) ;

}


 

bool anyDigitRepeated(int n )

{

long long int arr[10]={0};

while(n!=0)

{

long long int rem=n%10;

arr[rem]++;

n=n/10;

}

bool repeated=false;

for(long long int i=0;i<10;i++)

{

if(arr[i]>1)

{

repeated=true;

break;

}

 

}

return repeated;

}

int main()

{

long long int b,k;

cin>>b>>k;

if( ((b>0)&&(b<10))&&(k==9) )

{

cout<<-1<<endl;

return 0;

}

bool mila=true;

for(long long int i=pow(10,k-1);i<=pow(10,k)-1;i++)

{

if( (beautyfactor(i)==b )&&(zeroHai(to_string(i))==false)&&(anyDigitRepeated(i)==false) )

{

cout<<i<<endl;

mila=false;

break;

}

 

 

}

if(mila==true)

cout<<-1<<endl;

return 0;

 

 

}
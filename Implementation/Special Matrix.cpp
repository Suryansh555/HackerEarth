#include<bits/stdc++.h>

using namespace std;


 

int main(){

int t;

cin>>t;

while(t--){

  int n;

  cin>>n;

  char c[n][n];

  int i,j,x=-1,y=-1;

  for(i=0;i<n;i++){

    for(j=0;j<n;j++){

      cin>>c[i][j];

      if(c[i][j]=='*'){

        x=i;

        y=j;

      }

    }

  }

  int pos=n/2;

  if(x<=pos &&y<=pos){

  cout<<(pos-x)+(pos-y)<<endl;

}

else if(x>=pos &&y<=pos){

  cout<<(x-pos)+(pos-y)<<endl;

}

else if(x<=pos && y>=pos){

  cout<<(pos-x)+(y-pos)<<endl;

}

else if(x>=pos &&y>=pos){

  cout<<(x-pos)+(y-pos)<<endl;

}

}


 

  return 0;

}
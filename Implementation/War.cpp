#include <bits/stdc++.h>

using namespace std;


 

void fun(int &bob,int &alice,int bobele,int aliceele){

if (bobele>aliceele)

bob+=1;

else if (aliceele>bobele)

alice+=1;

}


 

int main(){

int t;

cin>>t;

for (int i{};i<t;i++){

int n;

cin>>n;

int alicearr[n]={};

int bobarr[n]={};


 

for (int p{};p<n;p++){

int a;

cin>>a;

bobarr[p]=a;

}


 

for (int p{};p<n;p++){

int b;

cin>>b;

alicearr[p]=b;

}


 

int bobn = sizeof(bobarr) / sizeof(bobarr[0]);

int alicen = sizeof(alicearr) / sizeof(alicearr[0]);

sort(bobarr, bobarr + bobn);

sort(alicearr, alicearr + alicen);



 

if (bobarr[n-1]>alicearr[n-1])

cout<<"Bob\n";

else if (alicearr[n-1]>bobarr[n-1])

cout<<"Alice\n";

else

cout<<"Tie\n";


 

}

 

}
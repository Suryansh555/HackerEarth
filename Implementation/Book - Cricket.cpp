#include <iostream>

#include <algorithm>

using namespace std;


 

int main(){

int t{}, N{}, P{}, l{}, i{}, j{}, a{}, b{};

string s{};

cin >> t;

for(i=1; i<=t; i++){

cin >> N >> P >> s;


 

l = s.length();

int runs[P+1]={}, status[P+1];

for(j=0; j<=P; j++){status[j] = -2;}

a = 2; b = 1;


 

for(j=0; j<l; j++){

status[a] = 1; status[b] = 1;

if(j%6 == 0){swap(a,b);}

if(s[j]=='1'){

runs[a]++;

swap(a,b);

}

else if(s[j]=='2'){

runs[a]+=2;

}

else if(s[j]=='4'){

runs[a]+=4;

}

else if(s[j]=='6'){

runs[a]+=6;

}

else if(s[j]=='W'){

status[a] = -1;

a = max(a,b) + 1;

}

}


 

cout << "Case " << i << ":\n";

for(j=1; j<=P; j++){

cout << "Player "<< j << ": ";

if(status[j] == 1){ cout << runs[j] << '*';}

else if(status[j] == -2){ cout << "DNB";}

else{ cout << runs[j];}

cout << '\n';

}

}

}
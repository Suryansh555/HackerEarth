#include<bits/stdc++.h>


 

using namespace std;


 

int k,i,j;


 

int main(){


 

    cin>>k;


 

    char st[k][101];


 

    for(i=0;i<k;i++){


 

        cin>>st[i];


 

    }


 

    int n;


 

    cin>>n;


 

    char s[n][101];


 

    for(i=0;i<n;i++){


 

        cin>>s[i];



 

    }


 

    for(i=0;i<k;i++){


 

        for(j=0;j<n;j++){


 

            if(strcmp(st[i],s[j])==0){

                

                strcpy(s[j],"-1");


 

            }


 

        }


 

    }


 

    for(i=0;i<n;i++){



 

        if(strcmp(s[i],"-1")){


 

            s[i][0]=char(s[i][0]-'a'+'A');


 

            s[i][1]='.';

        }


 

    }


 

    for(i=n-1;i>=0;i--){

        

        if(strcmp(s[i],"-1")){


 

            s[i][1]=' ';


 

            break;


 

        }


 

    }

    

    for(i=0;i<n;i++){



 

        if(strcmp(s[i],"-1")){


 

            cout<<s[i][0]<<s[i][1];


 

        }


 

    }


 

}
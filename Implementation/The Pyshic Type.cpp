#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin>>n;

    int A[n+1];

    for(int i = 1; i<=n; i++){

        cin>>A[i];

    }

    int S,E;

    cin>>S>>E;

    int x = S,flag=0;

    for(int i = 1; i<=n; i++){

        x = A[x];

        if(x==E||S==E){

            flag=1;

            break;

        }

    }

    if(flag==1){

        cout<<"Yes"<<endl;

    }

    else{

        cout<<"No"<<endl;

    }

    return 0;

}
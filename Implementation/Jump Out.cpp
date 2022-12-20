#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin>>n;

    int A[n];

    for(int i = 0; i<n; i++){

        cin>>A[i];

        if(A[i]+(i+1)>n){

            cout<<(i+1)<<endl;

            break;

        }


 

    }

    

    return 0;

}
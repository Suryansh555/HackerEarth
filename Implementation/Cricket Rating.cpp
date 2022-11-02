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

    }

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i<n; i++){

        sum1 = sum1+A[i];

        if(sum2<sum1){

            sum2 = sum1;

        }

        if(sum1<0){

            sum1 = 0;

        }

    }

    cout<<sum2<<endl;

    return 0;

}
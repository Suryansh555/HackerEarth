#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    long t;

    cin>>t;

    while(t--){

        long n;

        cin>>n;

        long A[n];

        for(int i = 0; i<n; i++){

            cin>>A[i];

        }

        

        

            long sum = 0;

            for(int i = 0; i<2; i++){

                sum = sum + A[i];

            }

            long minn = sum;

            for(int i = 2; i<n; i++){

                sum = sum+A[i]-A[i-2];

                minn = min(minn,sum);

            }

            

            cout<<minn<<endl;

        

        

    }

    return 0;

}
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int ammo,n;

        cin>>ammo>>n;

        int A[n];

        for(int i = 0; i<n; i++){

            cin>>A[i];

        }

        // for(int i = 0; i<n; i++){

        //  cout<<A[i];

        // }

        for(int i = 0; i<n; i++){

            if(A[i]==0){

                ammo--;

            }

            if(A[i]==1){

                ammo = ammo+2;

            }

            if(ammo!=0&&i==n-1){

                cout<<"Yes"<<" "<<ammo<<endl;

                break;

            }

            if(ammo==0&&i!=n-1){

                cout<<"No"<<" "<<i+1<<endl;

                break;

            }

            if(ammo==0&&i==n-1){

                cout<<"Yes"<<" "<<ammo<<endl;

                break;

            }

        }

    }

    return 0;

}
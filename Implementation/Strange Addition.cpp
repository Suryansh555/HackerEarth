#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int x,y;

        cin>>x>>y;

        int sum1 = 0;

        while(x>0){

            int c = x%10;

            sum1 = 10*sum1 + c;

            x = x/10;

        }

        int sum2 = 0;

        while(y>0){

            int c = y%10;

            sum2 = 10*sum2 + c;

            y = y/10;

        }

        int c = sum1+sum2;

        int sum3 = 0;

        while(c>0){

            int b = c%10;

            sum3 = 10*sum3 + b;

            c = c/10;

        }

        cout<<sum3<<endl;


 

    }

    return 0;

}
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    long long int t;

    cin>>t;

    while(t--){

        long long int m,sum3 = 0;

        cin>>m;

        while(m--){

            long long int x,y,sum = 0;

            cin>>x>>y;

            sum= x*y;

            if(sum<9){

                sum3+= sum;

            }

            else{

                long long int c = 0,sum2;

                while(sum>9){

                    long long int n = sum;

                    sum2 = 0;

                    while(n>0){

                    c = n%10;

                    n = n/10;

                    sum2+= c;

                    }

                    sum = sum2;

                }

                sum3+= sum;

            }

            

        }

        while(sum3>9){

            long long int c = 0,sum2;

            

                long long int n = sum3;

                sum2 = 0;

                while(n>0){

                c = n%10;

                n = n/10;

                sum2+= c;

                }

                sum3 = sum2;

            

            

        }

        cout<<sum3<<endl;

    }

    return 0;

}
#include <bits/stdc++.h>


 

using namespace std;


 

int main() {

    int N,K,i,j,tn,ns;

    vector< vector<int> > a;

    cin>>N>>K;

    for(i=0;i<K;i++){

        vector<int> t;

        cin>>tn;

        t.push_back(tn);

        for(j=0;j<tn;j++){

            cin>>ns;

            t.push_back(ns);

        }

        a.push_back(t);

    }


 

    int T,a_x,a_y,x,y,c=0;

    cin>>T;

    while(T--){

        cin>>x>>y;

        i=j=1;

        for(auto aa:a){

            for(auto tt:aa){

                if(c>0){

                    if(x == tt){

                    a_x = i;

                    }

                    if(y == tt ){

                    a_y = j;

                    }

                }

                c++;

            }

            i++;

            j++;

            c=0;

        }

        cout<<min(abs(a_x-a_y),K-abs(a_x-a_y))<<endl;


 

    }

    return 0;

}
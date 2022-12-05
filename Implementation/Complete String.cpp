#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        map<char,int>m;

        string s;

        cin>>s;

        for(int i = 0; i<s.size(); i++){

            m[s[i]]++;

        }

        int count = m.size();

        if(count==26){

            cout<<"YES"<<endl;

        }

        else{

            cout<<"NO"<<endl;

        }


 

    }

    return 0;

}
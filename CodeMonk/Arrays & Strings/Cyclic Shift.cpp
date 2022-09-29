#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string st,temp;
        cin>>st;
        int l = 0,repetation = n;
        temp = st;
 
        for(int i=0;i<n;++i){
            temp+=st[i];
            int res = temp.compare(i+1,n,temp,l,n);
            if(res==1){
                l   = i+1;
            }
            int res1 = temp.compare(i+1,n,st,0,n);
            if(res1==0){
                repetation = i+1;
                break;
            }
        }
        cout<<(l+(k-1)*repetation)<<"\n";
 
    }
}
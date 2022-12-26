#include<bits/stdc++.h>

using namespace std;

 

int main() {

   unordered_map<long long int, long long int>mp;

   vector<pair<long long int, long long int>>v;

   long long int val, val1;

   do {

       cin>>val>>val1;

       if(val == -1 && val1 == -1)

           continue;

       mp[val]++;

       mp[val1]++;

       // mp1[val] = val1;

       // mp1[val1] = val;

       v.push_back(make_pair(val, val1));

   }while(val != -1 && val1 != -1);

   for(int i = 0; i < v.size(); i++) {

       if(mp[v[i].first] == 1 && mp[v[i].second] == 1)

           cout<<"-1 -1\n";

       else if(mp[v[i].first] > 1 && mp[v[i].second] <= 1)

           cout<<"0 1\n";

       else

           cout<<"1 0\n";

   }

}
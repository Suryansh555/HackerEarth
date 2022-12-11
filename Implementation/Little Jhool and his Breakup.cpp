#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin>>s;

    int c1 = 0;

    for(int i = 0; i<s.size(); i++){

        if(s[i]=='l'){

            for(int j = i+1; j<s.size(); j++){

                if(s[j]=='o'){

                    for(int x = j+1; x<s.size(); x++){

                        if(s[x]=='v'){

                            for(int c = x+1; c<s.size(); c++){

                                if(s[c]=='e'){

                                    c1++;

                                    cout<<"I love you, too!"<<endl;

                                    x = s.size();

                                    i = s.size();

                                    j = s.size();

                                    c = s.size();

                                    break;

                                }

                            }

                        }

                    }

                }

            }

        }

    }

    if(c1==0){

        cout<<"Let us breakup!"<<endl;

    }

    return 0;

}
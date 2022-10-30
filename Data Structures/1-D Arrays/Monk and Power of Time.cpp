#include<iostream>

#include<queue>

using namespace std;

int main(){

    ios::sync_with_stdio(0);

    cin.tie(0);

    int n;

    cin>>n;

    queue<int> co;

    queue<int> io;

    int x,y;

    for(int i=0;i<n;i++){

        cin>>x;

        co.push(x);

    }

    for(int i=0;i<n;i++){

        cin>>y;

        io.push(y);

    }

    int count=0;

    while(!io.empty()){

        int temp=co.front();

        if(temp!=io.front()){

            co.pop();

            count++;

            co.push(temp);

        }

        else{

            co.pop();

            io.pop();

            count++;

        }

    }

cout<<count;

return 0;


 

}
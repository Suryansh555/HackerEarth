#include <iostream>

using namespace std;


 

int main()

{

    long int n;

    cin>>n;

    long int sum1=0;

    long int sum2=0;

    long int sum3=0;

    long int arr[n];

    for(long int i=1; i<=n; i++)

    {

        cin>>arr[i];

        

        if(i%3==1)

        {

            sum1 += arr[i];

        }

        else if(i%3==2)

        {

sum2 += arr[i];

        }

        else

        {

            sum3 += arr[i];

        }

    }

    

    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    return 0;

}


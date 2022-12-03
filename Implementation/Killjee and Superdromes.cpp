#include<bits/stdc++.h>

using namespace std;

int ar[1000000]={0};

int arcount=0;

int solve (int n)

{

 if(arcount<n)

 {

   int total=ar[arcount];

      for(int i=arcount+1;i<=n;i=i+2)

      {

           int temp=i;

           int super=1;

           int decimal[100001];

           int count=-1;

           while(temp>0)

           {

                count++;

                decimal[count]=temp%10;

                temp=temp/10;

           }

           for(int j=0;j<=count/2;j++)

           {

                if(decimal[j]!=decimal[count-j])

                {

                     super=0;

                     break;

                }

           }

           if(super)

           {

                int binary[20];

                temp = i;

                count=-1;

                while(temp>0)

                {

                     count++;

                     binary[count]=temp%2;

                     temp=temp/2;

                }

                for(int j=0;j<=count/2;j++)

                {

                     if(binary[j]!=binary[count-j])

                     {

                          super=0;

                          break;

                     }

                }

           }

           if(super)

           {

                total++;

     }

     arcount++;

     ar[arcount]=total;

     arcount++;

     ar[arcount]=total;

   }

      return total;

 }

 else

 {

   return ar[n];

 }

}

int main()  

{

    int T;

    cin >> T;

    for(int t_i=0; t_i<T; t_i++)

    {

         int n;

         cin >> n;

         int out_;

         out_ = solve(n);

         cout << out_;

         cout << "\n";

    }

}
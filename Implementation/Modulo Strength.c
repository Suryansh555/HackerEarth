#include <stdio.h>


 

int main(){

    int n,k;

    scanf("%d%d",&n,&k);

    int A[n];

    for(int i=0;i<n;i++){

        scanf("%d",&A[i]);

    }

    long long int B[k];

    for(int i=0;i<k;i++){

        B[i]=0;

    }

    int mod;

    for(int i=0;i<n;i++){

        mod = A[i]%k;

        B[mod] = B[mod] + 1;

        

    }

    long long int sum=0;

    for(int i=0;i<k;i++){

        sum = sum + (B[i]*(B[i]-1));

    }

    printf("%lld",sum);

    }


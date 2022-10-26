#include <stdio.h>

#include <stdlib.h>

int main(){

    long int n,max=0;

    int m=0;

    scanf("%ld\n", &n);

    long int a[n];

    for(long int i = 0 ; i < n ; i++)

    {

        scanf("%ld ",&a[i]);

        if(max<a[i])

        max=a[i];

    }

    max++;

    int* f;

    f=(int*)malloc(max*sizeof(int));

    for(long int i = 0 ; i < n ; i++)

    {

        

        if(m<++f[a[i]])

        m=f[a[i]];

    }

    printf("\n");

    long int t;

    scanf("%ld\n",&t);    

    while(t--){

        long int l,r;

        long long int sum=0;

        scanf("%ld %ld\n",&l,&r);

        if(l<=m){

        for(long int i = 0; i < n ; i++){

            if(f[a[i]]>=l&&f[a[i]]<=r)

                sum=sum+a[i];

        }   

        }

        printf("%lld\n",sum);

    }   

    return 0;

}
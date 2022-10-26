#include <stdio.h>
#include <limits.h>
 
main()
{
    int T;                  
    scanf("%d", &T);  
    long int N;         
    for (int i = 0; i < T; i++)
    {
       int num = INT_MAX; 
       scanf("%ld", &N);     
       long int a;                 
       for (int j = 0; j < N; j++)
        {
            scanf("%ld", &a);   
            if (a < num)             
                 num = a;             
        }
        printf("\n%ld", num); 
    }
}
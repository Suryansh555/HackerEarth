#include<stdio.h>

#include<stdlib.h>

int cmp(const void *a, const void *b)                                      //Sorting function for quick sort. 

{

return *(int *)a - *(int*)b;

}

 

int main()

{

int n, arr[1000], i;

scanf("%d",&n);

for(i=0;i<n;i++)scanf("%d",&arr[i]);

 

qsort(arr,n,sizeof(int),cmp);                                      //This is inbuilt function for sortin in C. It is present in <stdlib.h> check internet for more information.

   int min =arr[0];

   int max =arr[n-1];

   

for(i = 0; i < n;i++)

{

 if(arr[i]>min)

break;                                                     //Logic for checking every element is present or not.

 if(min<max && min ==arr[i])

min++;

}

 

 

if(i==n && min == max)                    

printf("YES\n");

else

printf("NO\n");

 

return 0;

}

 
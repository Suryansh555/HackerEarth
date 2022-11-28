#include<stdio.h> 
int a[2000][2000],r[10][2010]; 
int main() { 
	int n; 
	int p[]={1,2,4,8,16,32,64,128,256,512,1024,2048},i,j; 
	scanf("%d",&n); 
	for(i=1;i<=p[n]-1;i++) { 
		for(j=1;j<=i;j++) { 
			scanf("%d",&a[i+1][j]); 
			} 
		} 
		for(i=1;i<=p[n];i++) { 
			r[0][i]=i; 
		} for(i=1;i<=n;i++) { for(j=1;j<=p[n-i];j++) { if(a[r[i-1][2*j]][r[i-1][2*j-1]]==1) { r[i][j]=r[i-1][2*j]; } else { r[i][j]=r[i-1][2*j-1]; } } } printf("%d\n",r[n][1]); return(0); }
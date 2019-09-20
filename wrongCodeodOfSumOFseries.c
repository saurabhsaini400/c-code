#include <stdio.h>
#define m 1000000007

int main() {
    // your code goes here
    int a[10],i,sum=0,p,n,q=0;
    scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d/n",&a[i]);}
         for(i=0;i<n;i++){
         for(p=1;p<=a[i];p++){
             sum=sum+(p%m)*(p%m);
         }
         printf("%d\n",sum);
         sum=q;
         }
    
    return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
    int n,i,a[100],temp,rem=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        
        temp=a[i];
        rem=temp%5;
        if(rem==3&&temp>37){
            temp=temp+2;
            printf("%d\n",temp);
        }
        else if(rem==4&&temp>37){
            temp=temp+1;
            printf("%d\n",temp);
        }
        else if(a[i]<36||rem<3){
            printf("%d\n",a[i]);
        }
        
    }

    return 0;
}

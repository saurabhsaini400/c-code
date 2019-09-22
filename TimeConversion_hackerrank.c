#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){   
    int h,m,s,i;
    char ch[3];
    scanf("%d:%d:%d",&h,&m,&s);
    for(i=0;i<2;i++){
        scanf("%c",&ch[i]);
    }
    if(ch[0]=='P'&&h!=12){
        h=h+12;
        printf("%02d:%02d:%02d",h,m,s);
    }
    else if(ch[0]=='A'&&h==12){
        h=0;
        printf("%02d:%02d:%02d",h,m,s);
    }
    else if(ch[0]=='A'){
        printf("%02d:%02d:%02d",h,m,s);
    }
    else if(ch[0]=='P'){
         printf("%02d:%02d:%02d",h,m,s);
    }
     return 0;
}

#include <stdio.h>

int main()
{
    int H,T,S,sum;
    scanf("%d\n%d\n%d",&H,&T,&S);
    if(H>=10||H==0||T>=10||T<0||S>=10||S<0){
        printf("傻B");
        return 0;
    }
    if(H<=0){
        H=H*-1;
        sum=(H*100+T*10+S)*-1;
    }
    else{
        sum=(H*100+T*10+S);
    }
    printf("sum=%d",sum);
    
}

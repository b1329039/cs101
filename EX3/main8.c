#include <stdio.h>

int main()
{
    int H=-4,T=6,S=8,sum;
    if(H>=10||H==0||T>=10||T<0||S>=10||S<0){
        printf("error");
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

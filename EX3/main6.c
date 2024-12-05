#include <stdio.h>

int main()
{
    int D,money;
    scanf("%d",&D);
    if(D<=1500){
        printf("70元購");
    }
    else{
        money=70+(((D-1500)/100))*10;
        if(D%100!=0){
            money=money+10;
        }
        printf("money=%d元",money);
    }
}

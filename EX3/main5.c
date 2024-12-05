#include <stdio.h>

int main()
{
    int Time=123,money;
    if(Time<=30){
        printf("0元購");
    }
    else if(Time>=240){
        printf("240元是時間的上限，是你的上限");
    }
    else{
        money=((Time/30)-1)*30;
        if(Time%30!=0){
            money=money+30;
        }
        printf("money=%d元",money);
    }
}

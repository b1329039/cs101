#include <stdio.h>

int main()
{
    int num=10;
    if(num%15==0){
        printf("Love IU");
    }
    else if(num%3==0){
        printf("Love");
    }
    else if(num%5==0){
        printf("IU");
    }
    else{
        printf("%d",num);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num=1,n=9,lop;
    for(lop=1;num<=9;lop++){
        if(lop<9){
            printf("%d*%d=%d\t",lop,num,lop*num);
            continue;
        }
        while(lop==9){
            printf("%d*%d=%d\n",lop,num,lop*num);
            num++;
            lop=0;
        }
        
    }
    return 0;
}

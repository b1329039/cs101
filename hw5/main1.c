#include <stdio.h>

int main()
{
    int num,lop;
    
    for(lop=1;lop<=7;lop++){
        printf("%*s",7+1-lop," ");
        for(num=1;num<=lop;num++){
            printf("%d ",lop);
        }
        printf("\n");
    }
    return 0;
}

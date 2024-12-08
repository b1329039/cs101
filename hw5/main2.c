#include <stdio.h>
#include <math.h>

int main()
{
    float times,cou,nn=0;
    for(times=1;times<=500000;times++){
        cou=((1+2*(times-1))*pow(-1,times+1));
        nn=nn+(4/cou);
    }
    printf("%.5f\n",nn);
    return 0;
}

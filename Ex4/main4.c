#include <stdio.h>

int main()
{
    int i=12345,num1000,num100,num10,num1,outside,null,whether1=0,s;
    if(i<0){
        i=i*-1;
        printf("-");
    }
    outside=i/10000;
    num1000=(i-outside*10000)/1000;
    num100=(i-outside*10000-num1000*1000)/100;
    num10=(i-outside*10000-num1000*1000-num100*100)/10;
    num1=(i-outside*10000-num1000*1000-num100*100-num10*10);
    null=num1000;
    num1000=num1;
    num1=null;
        s=outside*10000+num1000*1000+num100*100+num10*10+num1;
        printf("%d",s);
}

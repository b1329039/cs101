int main()
{
    int num=1,n=7,lop;
    for(lop=1;num<=7;lop++){
        if(lop<n){
            printf(" ");
            continue;
        }
        else{
            printf("%d ",num);
        }
        while(lop==7){
            printf("\n");
            num++;
            lop=0;
            n--;
        }
        
    }
    return 0;
}

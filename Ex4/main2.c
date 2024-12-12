int main()
{
    double pi;
    long cout,n;
    long lpi;
    for(n=1;n>=0;n++){
        cout=cout+(((4*100000)/(-1+2*n))*pow(-1,n+1));
        if((cout)==314159){
            printf("n=%d",n);
            return 0;
        }
    }
}

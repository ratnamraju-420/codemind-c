#include<stdio.h>
int main()
{
    float a,b,c,gs,pf;
    scanf("%f%f%f",&a,&b,&c);
    pf=a*(0.12);
    gs=a+b+c+pf;
    printf("%.2f
%.2f",pf,gs);
}

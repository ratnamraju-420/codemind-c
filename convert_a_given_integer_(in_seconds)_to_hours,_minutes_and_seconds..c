#include<stdio.h>
int main()
{
    int i,s,m,h;
    scanf("%d",&i);
    h=i/3600;
    m=(i-(h*3600))/60;
    s=(i-(m*60)-h*3600);
    printf("H:M:S-%d:%d:%d",h,m,s);
}
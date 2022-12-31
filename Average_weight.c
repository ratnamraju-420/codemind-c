#include<stdio.h>
int C(int a,int b, int avg)
{
    int c;
    c=3*avg-a-b;
    return c;
}
int main()
{
    int a,b,c,avg;
    scanf("%d%d%d",&a,&b,&avg);
    int x=C(a,b,avg);
    printf("%d",x);
}
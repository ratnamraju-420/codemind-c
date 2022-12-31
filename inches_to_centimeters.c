#include<stdio.h>
void HGT(int);
int main()
{
    int h;
    scanf("%d",&h);
    HGT(h);
    return 0;
}
void HGT(int h)
{
    float x;
    x=(float)2.54*h;
    printf("%-.2f",x);
}
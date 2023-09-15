#include<stdio.h>
float sum(int n)
{
    float i,s=0.0;
    for(i=1;i<=n;i++)
       s=s+1/i;
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.2f",sum(n));
    return 0;
}
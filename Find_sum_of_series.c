#include<stdio.h>
int main()
{
    int n;
    float i,s=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/i;
    }
    printf("%.2f",s);
    return 0;
}
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int s=0,i,a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2!=0)
        {
        s=s+a[i];
        }
    }
    printf("%d",s);
}
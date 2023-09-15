#include<stdio.h>
int is_Spy(int n)
{
    int d,s=0,p=1;
    while(n!=0)
    {
        d=n%10;
        s+=d;
        p*=d;
        n=n/10;
    }
    return s==p;
}    
int main()
{
    int n;
    scanf("%d",&n);
    if(is_Spy(n))
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}

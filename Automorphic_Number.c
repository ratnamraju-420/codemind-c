#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int sq=n*n;
    int d=10;
    int temp = n,r,flag = 0;
    while(temp>0)
    {
        r = sq % d;
        if(n == r)
        {
            flag = 1;
            break;
        }
        temp = temp/10;
        d=d*10;
    }
    if(flag==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}
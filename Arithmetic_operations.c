#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int diff(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int pro(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int quo(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
int rem(int a,int b)
{
    int c;
    c=a%b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=add(a,b);
    printf("Sum:%d
",x);
    int x2=diff(a,b);
    printf("Difference:%d
",x2);
    int x3=pro(a,b);
    printf("Product:%d
",x3);
    int x4=quo(a,b);
    printf("Quotient:%d
",x4);
    int x5=rem(a,b);
    printf("Remainder:%d
",x5);
}
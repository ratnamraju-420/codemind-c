#include<stdio.h>
void Num(int,int,int);
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    Num(X,Y,Z);
    return 0;
}
void Num(int X,int Y,int Z)
{
    int N;
    N=(Z-Y)/X;
    printf("%d",N);
}
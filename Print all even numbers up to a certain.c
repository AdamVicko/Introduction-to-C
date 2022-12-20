#include<stdio.h>
int x,y;
int main(void)
{
    printf("Unesi broj: ");
    scanf("%d",&x);
    for(y=1; y<x; y++)
    {
        if(y%2==0)
        {
        printf("%d  ",y);
        }
    }
    return 0;
}
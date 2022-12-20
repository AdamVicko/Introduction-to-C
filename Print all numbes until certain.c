#include<stdio.h>
int x,y;

int main(void)
{
    printf("Unesi broj:");
    scanf("%d",&x);
    for(y = 0; y<x; y++)
    {
        printf("%d ",y);
    }
    return 0 ;
}

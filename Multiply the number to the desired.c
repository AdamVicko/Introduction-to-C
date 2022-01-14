#include<stdio.h>
int x,y,umnozak;
int main(void)
{
    printf("Unesi zeljeni broj: ");
    scanf("%d",&x);
    umnozak=1;
    for(y=1;y<x;y++)
    {
        umnozak*=y;
    }
    printf("Umnozak brojeva do zeljenog je: %d",umnozak);
    return 0;
}
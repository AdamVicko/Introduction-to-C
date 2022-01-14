#include<stdio.h>
int x,y,zbroj;
int main(void)
{
    printf("Unesi zeljeni broj: ");
    scanf("%d",&x);
    zbroj = 0;
    for(y=0;y<x;y++)
    {
    if(y%2==0)
    {
        zbroj+=y;
    }
    }
    printf("Zbroj parnih je: %d",zbroj);
    return 0;
}
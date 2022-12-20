#include<stdio.h>
int x,y,zbroj;
int main(void)
{
    printf("Unesi zeljeni broj: ");
    scanf("%d",&x);
    zbroj = 0;
    for(y=1; y<=x ; y++)
    {
        zbroj += y;
    }
    printf("Zbroj je: %d",zbroj);
    return 0;
    
}
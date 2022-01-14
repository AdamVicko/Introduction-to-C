#include<stdio.h>
int y,x;
int main(void)
{
    printf("Unesi zeljeni broj: ");
    scanf("%d",&x);
    for (y = 1;y <= x; y++)
    {
        if ((y % 3 == 0) && (y % 5 == 0) && (y % 6 == 0))
        {
        printf("%d\n",y);
        }
    
    }
    return 0;
}
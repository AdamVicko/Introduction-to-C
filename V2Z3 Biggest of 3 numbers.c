#include<stdio.h>
int x,y,c,i;
int main(void)
{
    printf("Unesite tri cijela broja: ");
    scanf("%d%d%d",&x,&y,&c);
    i=x;
    if(i<y)
    {
        i=y;
    }
    if(i<c)
    {
        i=c;
    }
    printf("Najveci broj je: %d",i);
    return 0;
}
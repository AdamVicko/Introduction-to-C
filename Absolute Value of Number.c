#include<stdio.h>
int broj,aps;
int main(void)
{
    printf("Unesite broj: ");
    scanf("%d",&broj);
    if(broj>=0)
    {
        aps = broj;
        printf("Apsolutna vrijednost broja %d je %d",broj,aps);
    }
    else
    {
        aps = broj*(-1);
        printf("Apsolutna vrijednost broja %d je %d",broj,aps);
    }
    return 0;
}
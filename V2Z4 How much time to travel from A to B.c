#include<stdio.h>
int n,n1,min,sat,sek;
int main(void)
{
    printf("Unesite vrijeme putovanja u sekundama: ");
    scanf("%d",&n);
    sat=n/3600;
    n1=n%3600;
    min=n1/60;
    sek=n%60;
    printf("Trajanje putovanja\n h: %d\n min: %d\n sek: %d",sat,min,sek);
    return 0;
}
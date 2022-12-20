#include<stdio.h>
int brojpon;
float izracun,djel,i;
int main()
{
    printf("Unesi broj: ");
    scanf("%d",&brojpon);
    while(brojpon<=0)
    {
        printf("Broj nije pozitivan!\nUnesi broj: ");
        scanf("%d",&brojpon);
    }
    for(i=1;i<=brojpon;i++)
    {
        djel=1/i;
        izracun+=djel;
    }
    printf("Zbroj reda 1/1+1/2...1/unesen broj je: %f",izracun);
    return 0;
}
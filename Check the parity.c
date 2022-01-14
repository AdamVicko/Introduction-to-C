#include<stdio.h>
int broj;
main()
{
    printf("Unesi broj: %d");
    scanf("%d",&broj);
    if(broj % 2 == 0)
    {
        printf("Broj je paran %d",broj);
    }
    else
    {
        printf("Broj je neparan %d",broj);
    }
    return 0;
}
#include<stdio.h>

float broj,rec;
main()
{
    printf("Unesi broj: ");
    scanf("%f",&broj);
    if (broj != 0)
    {
        rec = 1 / broj;
        printf("Reciprocni broj je: %f",rec);
    }
    else 
    printf("Broj je jednak nuli!");
return 0;
}
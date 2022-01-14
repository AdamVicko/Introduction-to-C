#include<stdio.h>
float brojart,cijenaart,cijenapop1,cijenapop2;
int main(void)
{
    printf("Za izracunavanje popusta unesite broj artikala: ");
    scanf("%f",&brojart);
    cijenaart=brojart*12;
    if(brojart>4)
    {
    if(brojart<10)
    {
    printf("Ostvareni popust je 5posto\n");
    cijenapop1=cijenaart-(0.05*cijenaart);
    printf("Cijena je %f",cijenapop1);
    }
    }
    if(brojart>10)
    {
        printf("Popust je 10posto\n");
        cijenapop2=cijenaart-(0.10*cijenaart);
        printf("Cijena je %f",cijenapop2);
    }
    if(brojart<5)
{
    printf("Popusta nema, cijena je %f",cijenaart);
    
}
return 0;
}
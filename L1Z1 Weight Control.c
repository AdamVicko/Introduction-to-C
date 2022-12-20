#include<stdio.h>
float smrsaviti,uspjelo,ukup,mjer1,mjer2,mjer3,ost1,ost2;
int main(void)
{
    printf("Koliko kilograma osoba treba smrsaviti: ");
    scanf("%f",&smrsaviti);
    printf("Gubitak nakon prvih 2 tjedna: ");
    scanf("%f",&mjer1);
    ost1 = smrsaviti - mjer1;
    printf("Ostalo za smrsaviti: %f\n ",ost1);
    printf("Gubitak nakon jos 2 tjedna: ");
    scanf("%f",&mjer2);
    ost2 = smrsaviti - (mjer1 + mjer2);
    printf("Ostalo za smrsaviti: %f\n",ost2);
    printf("Gubitak nakon zadnjih 2 tjedna: ");
    scanf("%f",&mjer3);
    ukup = (mjer1 + mjer2) + mjer3;
    printf("Ukupni gubitak kilograma je %f , a zeljeni gubitak je %f\n",ukup,smrsaviti);
    uspjelo=smrsaviti-ukup;
    if(uspjelo>0)
    {
        printf("Ukupno smanjenje kilograma nije ispunilo ocekivanje");
    }
    if(uspjelo<=0)
    {
        printf("Ukupno smanjenje kilograma je ispunilo ocekivanje, BRAVO!");
    }
    return 0;
}

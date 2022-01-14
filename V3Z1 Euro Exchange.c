#include<stdio.h>
float eura,kune,kune1;
const float tecaj=7.52;
int main()
{
    printf("Unesite zeljeni broj eura: ");
    scanf("%f",&eura);
    kune=eura*7.52;
    printf("Za %f dobivate %f kuna",eura,kune);
    return 0;
    
}
#include<stdio.h>
int brzvoz,dopbrz,prekor1;
int main(void)
{
    printf("Unesi dopustenu brzinu , zatim brzinu vozaca: ");
    scanf("%d%d",&dopbrz,&brzvoz);
    if(brzvoz>dopbrz)
    {
        prekor1=brzvoz-dopbrz;
        if(prekor1<=20)
        {
            printf("Prekoracenje je %d ,oduzima se 1 bod",prekor1);
        }
        if((prekor1>20)&&(prekor1<=40))
        {
            printf("Prekoracenje je %d , oduzimaju se 2 boda",prekor1);
        }
        if(prekor1>40)
        {
            printf("Prekoracenje je %d , ODUZIMA SE VOZACKA DOZVOLA!",prekor1);
        }
    }
    if(brzvoz<dopbrz)
    {
        printf("Hvala na sigurnoj voznji!");
    }
    return 0;
}
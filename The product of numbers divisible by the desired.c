#include<stdio.h>
int poc,kraj,umnozak,djelitelj,i;
int main(void)
{
    printf("Unesi pocetnu i krajnju vrijednost niza: ");
    scanf("%d%d",&poc,&kraj);
   
    printf("Unesi djelitelja: ");
    scanf("%d",&djelitelj);
    umnozak=1;
    for(i=poc;i<=kraj;i++)
    {
        if(i%djelitelj==0)
        {
        umnozak=umnozak*i;
        }
    }
    printf("Umnozak niza brojeva djeljivih s zeljenim brojem je:%d",umnozak);
    return 0;
}
        
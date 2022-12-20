#include<stdio.h>
int krajniza,i;
float zbroj,recip;
int main(void)
{
    printf("Unesi krajnji broj niza: ");
    scanf("%d",&krajniza);
    zbroj=0;
    for(i=1;i<=krajniza;i++)
    {
        recip=i;
        zbroj=zbroj+(1/recip);
    }
    printf("Zbroj reciprocnih brojeva niza je:%f ",zbroj);
    return 0;
}
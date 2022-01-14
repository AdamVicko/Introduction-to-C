#include<stdio.h>
int i,n,zbroj;
int main(void)
{
    printf("Unesi krajnji broj niza: ");
    scanf("%d",&n);
    i=1;
    zbroj=0; /*Nije potrebno ubacivat u ovom slucaju*/

    while(i<=n)
    {
        zbroj=zbroj+i;
        i++;         /*Tek nakon izvrsenja cjelokupne petlje ide ispis rijesenja */
    }
    printf("%d",zbroj);
    return 0;
}
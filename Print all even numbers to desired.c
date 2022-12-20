#include<stdio.h>
int n,i;
int main(void)
{
    printf("Unesi krajnju vrijednost: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            
        }
    i++;
    }
    return 0;
}
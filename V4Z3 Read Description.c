#include<stdio.h>
int x,i,counter=0;
int main()
{
    printf("Unesi jedan broj: ");
    scanf("%d",&x);
    while(x<=0)
    {
        printf("Unesi jedan broj: ");
        scanf("%d",&x);
    }
        printf("Djelitelji broja %d su:",x);
            for(i=1;i<=x;i++)
            {
                if(x%i==0)
                {
                    counter++;
                    printf(" %d,",i);
                }
            }
        printf("\nBroj %d ima %d djelitelja.",x,counter);
        return 0;
}
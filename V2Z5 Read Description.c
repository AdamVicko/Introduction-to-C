#include<stdio.h>
#include<math.h>
int a,kvad;
int main(void)
{
    printf("Unesi zeljeni broj: ");
    scanf("%d",&a);
    kvad=a*a;
    if(a<0)
    {
        printf("%d",kvad);
    }
    if(a>0)
    {
        printf("Korijen %d je %f",a,sqrt(a));
    }
    if(a==0)
    {
        printf("Broj je jednak nuli");
    }
    return 0;
}
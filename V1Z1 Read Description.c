#include<stdio.h>
int a,b;
int main(void)
{
    printf("Unesi broj: ");
    scanf("%d",&a);
    b = a;
    printf("%d\n%d\n",a,b);
    a+=1;
    b+=1000;
    printf("%d  %d",a,b);
    return 0;
    
}
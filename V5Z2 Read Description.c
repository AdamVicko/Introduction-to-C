#include<stdio.h>
float heksa,i;
int x;
int main()
{
    printf("Unesite broj od 0-15: ");
    scanf("%d",&x);
        while((x<0)||(x>15))
        {
            printf("Unesite broj od 0-15: ");
            scanf("%d",&x);
        }
        while((x>=0)&&(x<16))
        {
          i=x/16;
          printf("%f",i);
          break;
        }  
    return 0;
}
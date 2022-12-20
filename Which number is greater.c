#include<stdio.h>
int prvibroj,drugibroj;
int main(void)
{

       printf("Unesi dva broja: \n ");
       scanf("%d%d",&prvibroj,&drugibroj);
       if(prvibroj > drugibroj)
       {
        printf("Prvi broj je veći: %d",prvibroj);
       }
         else
          {
             if(prvibroj < drugibroj)
             {
              printf("Drugi broj je veći: %d",drugibroj);
             
             }
                 else
                  {
                   printf("Brojevi su jednaki:%d = %d",prvibroj,drugibroj);
                  }
          }
return 0;
}
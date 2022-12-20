#include<stdio.h>
int broj,i,counterneg,counterpar,counternep;
float arts,zbroj;
int main()
{
        counterneg=0;
        counternep=0;
        counterpar=0;
        zbroj=0;
    for(i=1;i<6;i++)
    {
        printf("Unesi %d. broj: \n",i);
        scanf("%d",&broj);
        if(broj<0)
        {
            counterneg+=1;
        }
        if(broj%2==0)
        {
            counterpar+=1;
        }
        if(broj%2!=0)
        {
            counternep+=1;
        }
        zbroj+=broj;
        arts=zbroj/10;
    }
    printf("Negativnih brojeva ima %d\nParnih brojeva ima %d\nNeparnih brojeva ima %d\nAritmeticka sredina je\
    %f",counterneg,counterpar,counternep,arts);
    return 0;
}

ILI

#include<stdio.h>
#include<math.h>
int x,neg,nep,par;
float arts,zbrojx,i;
int main()
{
    
            for(i=0;i<5;i++) 
            {
                printf("Unesi jedan broj: ");
                scanf(" %d",&x);
                if(x<0)
                {
                    neg++;
                
                }
                if(x%2==0)
                {
                    par++;
                
                }
                if(x%2!=0)
                {
                    nep++;
                    
                }
                zbrojx=zbrojx+x;
            }
             arts=zbrojx/i;
printf("Aritmeticka sredina unesenih brojeva je %f,\nnegativnih brojeva ima, %d\nparnih brojeva ima %d,\n\
neparnih brojeva ima  %d",arts,neg,par,nep);
return 0;
}            
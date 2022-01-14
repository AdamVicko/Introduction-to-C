#include<stdio.h>
int main()
{
int broj,i,x,y,flag=0;
printf("Unesi bilo koji pozitivan broj: ");
scanf("%d",&broj);
for(i=2;i<broj;i++)
{
    if(broj%i==0)
    {
            flag++;
            x=broj/i;
            printf("%d i %d = %d\n",x,i,broj);
            if(flag>=2)
        {
            break;
        }
    }
    if(flag<=0)
    {
        printf("Broj nije moguce zapisati kao umnozak dva cijela broja!\n");
        break;
    }
}
        return 0;
}
#include<stdio.h>
int main()
{
    int i,x,y,par,nepar;
    for(i=100;i>0;i--)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(x=100;x>1;x--)
    {
        par=x%2;
        if(par==0)
        printf("%d ",x);
    }
    printf("\n");
    for(y=100;y>1;y--)
    {
    nepar=y%2;
    if(nepar!=0)
    printf("%d ",y);
    }
    
    return 0;
}
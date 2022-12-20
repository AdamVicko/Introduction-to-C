#include<stdio.h>
#include<math.h>
float a,b,c,D,x,x1,x2;
int main()
{
printf("Unesi 3 broja: ");
scanf("%f %f %f",&a,&b,&c);
if(a==0)
{
printf("Nije kvadratna jednadžba!");
}
if(a!=0)
{
    D=pow(b,2)-4*a*c;
    if(D>0)
    {
        x1=(-b+sqrt(D));
        x2=(-b-sqrt(D));
        printf("x1 je %f, x2 je %f",x1,x2);
    }
    if(D==0)
    {
        x=(-b/(2*a));
        printf("x je %f",x);
    }
    else
    printf("Nema realnih riješenja!");
}
return 0;
}
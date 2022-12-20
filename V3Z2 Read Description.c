#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
printf("Unesi jedan broj: ");
scanf("%f",&x);

    if(x<0)
    {
        y=2*(pow(x,2));
        printf("%f",y);
    }
    else
    {
        y=3+(sqrt(x));
        printf("%f",y);
    }
    return 0;
}
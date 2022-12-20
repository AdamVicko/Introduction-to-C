#include<stdio.h>
float x;
int main(void)
{
    scanf("%f",&x);
if((x<1000)&&(x>99))
{
    if(x%7==0)
    {
        printf("%f",x);
    }
    else
    {
        printf("%f nije djeljiv s 7",x);
    }
}
if(x<100)
{
    printf("premalo znamenki");
}
if(x>999)
{
    printf("previše znamenki");
}
return 0;

}
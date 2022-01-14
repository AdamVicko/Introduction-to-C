#include<stdio.h>
#include<math.h>
float m,P,a,c,h;
int main(void)
{
    printf("Unesi baze trapeza a,c i zatim visinu h: ");
    scanf("%f%f%f",&a,&c,&h);
    m=(a+c)/2;
    P=m*h;
    printf("Povrsina trapeza je : %f",P);
    return 0;
}
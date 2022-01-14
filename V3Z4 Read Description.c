#include<stdio.h>
#include<math.h>
int x,P,O,f;
float D;
char lud;
int main()
{
    pocetak:
    printf("Unesi stranicu kvadrata: ");
    scanf("%d",&x);
    if(x>=0)
    {
    P=pow(x,2);
    O=4*x;
    D=sqrt(2)*x;
    printf("Unesi 1 za povrsinu , 2 za opseg ili 3 za dijagonalu kvadrata: ");
    scanf("%d",&f);
    if(f==1)
        printf("%d",P);
    if(f==2)
        printf("%d",O);
    if(f==3)
        printf("%f",D);
    if((f<1)||(f>3))
    goto pocetak;
    }
    else{
        printf("Nemoguca duljina!");
    }
    return 0;
}
#include<stdio.h>
int parbrojsuma()
{
    int counter,suma=0;
    for(counter=100;counter<1001;counter++)
    {
        if(counter%2==0)
        suma+=counter;
    }
    printf("Suma svih parnih brojeva od 100 do 1000 je: %d",suma);
}
int nepbrojsuma()
{
    int counter,suma=0;
    for(counter=100;counter<=1000;counter++)
    {
        if(counter%3==0)
        suma+=counter;
    }
    printf("Suma svih neparnih brojeva od 100 do 1000 je: %d",suma);
}
int ostalosuma()
{
    int counter,suma=0;
    for(counter=100;counter<1001;counter++)
    {
        if(counter%10==0)
        suma+=counter;
    }
    printf("Suma brojeva dijeljivih s 10 je %d",suma);
}

int broj;
int main()
{
    printf("Upisi jedan cijeli pozitivan broj: ");
    scanf("%d",&broj);
    if(broj%2==0)
    {
        printf("Broj je paran\n");
        parbrojsuma();
    }
    if(broj%3==0)
    {
        printf("Broj je neparan\n");
        nepbrojsuma();
    }
    if((broj%2!=0)&&(broj%3!=0))
    {
    printf("Broj nije djeljiv niti s 3 niti s 2\n");
    ostalosuma();
    }
    return 0;
}
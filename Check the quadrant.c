#include<stdio.h>
int kord1,kord2;
int main (void)
{
    printf("Unesi kordinatu 1: ");
    scanf("%d",&kord1);
    printf("Unesi koordinatu 2: ");
    scanf("%d",&kord2);
    if(kord1 == 0)
    {
        printf("Tocka se nalazi na y osi");
    }
    if(kord2 == 0)
    {
        printf("Koordinata se nalazi na x osi");
    }
    if ((kord1 > 0)&&(kord2 > 0))
    {
        printf("Tocka se nalazi u prvom kvadrantu");
    }
    if((kord1 < 0)&&(kord2 < 0))
    {
        printf("Tocka se nalazi u trecem kvadrantu");
    }
    if((kord1 > 0)&&(kord2 < 0))
    {
        printf("Tocka se nalazi u drugom kvadrantu");
    }
    if((kord1 < 0)&&(kord2 > 0))
    {
        printf("Tocka se nalazi u cetvrtom kvadrantu");
    }
    return 0;
    
}
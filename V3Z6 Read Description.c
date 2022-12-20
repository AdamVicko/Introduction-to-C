#include<stdio.h>
int main()
{
    int x;
    float djel;
    printf("Unesi jedan cijeli broj: ");
    scanf("%d",&x);
    djel=x%7;
    printf("%f\n",djel);
    int djelswitch;
    djelswitch=djel;
    printf("%d\n",djelswitch);
    switch(djelswitch)
    {
        case'0':
        printf("Ponedjeljak");
        break;
        
        case '1':
        printf("Utorak");
        break;
        
        case '2':
        printf("Srijeda");
        break;
        
        case '3':
        printf("Cetvrtak");
        break;
        
        case '4':
        printf("Petak");
        break;
        
        case '5':
        printf("Subota");
        break;
        
        case '6':
        printf("Nedjelja");
        break;
        
        default:
        printf("Nema dana");

    }
    return 0;
}
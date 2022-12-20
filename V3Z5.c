#include<stdio.h>
#include<math.h>
float dijagonala,x,opseg,povrsina;
char p,o,d,izbor;
int main()
{
    printf("Unesi duljinu stranice kvadrata: ");
    scanf("%f",&x);
    while(x<=0)
    {
        printf("Unesi duljinu stranice kvadrata: ");
        scanf("%f",&x);
    }
    printf("Za izracun povrsine pritisnite-p, za opseg-o i za dijagonalu-d: ");
        scanf(" %c",&izbor);
    switch(izbor)
    {
        case 'p':
            povrsina=pow(x,2);
            printf("Povrsina kvadrata je:%f",povrsina);
            break;
        case 'o':
            opseg=4*x;
            printf("Opseg kvadrata je:%f",opseg);
            break;
        case 'd':
            dijagonala=sqrt(2)*x;
            printf("Duzina dijagonale je:%f",dijagonala);
            break;
        default:
        printf("Niste unijeli zeljeni izracun!");
    }
    return 0;
}

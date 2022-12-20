#include<stdio.h>
int ispit1,ispit2,zbroj;
float prosjek;
int main()
{
    printf("Unesite ukupne bodove iz prvog ,zatim iz drugog ispita: ");
    scanf("%d%d",&ispit1,&ispit2);
    while((ispit1>=40)&&(ispit2>=40))
    {
        zbroj=ispit1+ispit2;
        prosjek=zbroj/2;
        printf("Prosjek je: %f\n",prosjek);
        if(prosjek>=50)
            printf("Prolaz\n");
        if(prosjek<50)
        {
            printf("Pad\n");
        }
        printf("Unesite ukupne bodove iz prvog ,zatim iz drugog ispita: ");
        scanf("%d%d",&ispit1,&ispit2);
        if((ispit1<0)||(ispit2<0))
        return;
    }
    while((ispit1<40)||(ispit2<40))
    {
        printf("Pad\n");
        printf("Unesite ukupne bodove iz prvog ,zatim iz drugog ispita: ");
        scanf("%d%d",&ispit1,&ispit2);
        if((ispit1<0)||(ispit2<0))
        break;
    }
        
    return 0;
}
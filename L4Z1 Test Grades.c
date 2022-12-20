#include<stdio.h>
int main()
{
    int bodovia,bodovib,ocjena1,ocjena2;
    float arts;
    printf("Unesi bodove sa 1. kolokvija 0-100: ");
    scanf("\n%d", &bodovia);
    ocjena1=checkgrade(bodovia);
    printf("\nUnesi bodove 2. kolokvija 0-100: ");
    scanf("\n%d", &bodovib);
    ocjena2=checkgrade(bodovib);
    arts=(ocjena1+ocjena2)/2.0;
    printf("\nOcjena predmeta iz dva kolokvija je %f",arts);
    return 0;
}

int checkgrade(int x)
    {
            int i;
                if(x<=39){
                i=1;
                printf("Nedovoljan");
                return i;
                }
                if((x>=40)&&(x<=54)){
                    i=2;
                printf("Dovoljan");
                return i;
                }
                if((x>=55)&&(x<=69)){
                    i=3;
                printf("Dobar");
                return i;
                }
                if((x>=70)&&(x<=84)){
                    i=4;
                printf("Vrlo dobar");
                return i;
                }
                if((x>=85)&&(x<=100)){
                    i=5;
                    printf("Odlican ");
                    return i;
                }
            
    }        
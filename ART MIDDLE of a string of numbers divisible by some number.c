#include<stdio.h>
int poc,brojbrojeva,zbroj,kraj,i,djelitelj;
float artsred;
int main(void)
{
    printf("Unesi pocetnu i krajnju vrijednost niza brojeva: \n");
    scanf("%d%d",&poc,&kraj);
    printf("Unesi zeljenog djelitelja: ");
    scanf("%d",&djelitelj);
    if(djelitelj==0)
    {
        printf("Nemres djelit s NULOM!");
    }
    brojbrojeva=0;
    for(i=poc;i<=kraj;i++)
    {
        if(i%djelitelj==0)
        {
            brojbrojeva+=1;
             zbroj=zbroj+i;
            artsred=zbroj/brojbrojeva;
        }
    }
    printf("Aritmeticka sredina brojeva u nizu, djeljivih sa %d je \n%f.",djelitelj,artsred);
    return 0;
}
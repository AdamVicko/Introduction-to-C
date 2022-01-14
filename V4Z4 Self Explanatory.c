#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter number of rows: ");
   scanf("%d",&rows);
   for(i=1;i<=rows;++i){
       printf("i=%d\nj=",i);
   for(j=1;j<=i;++j){ /*Program vrti ovu for petlju sve dok je uvijet ispunjen , znaci za i=3 on vrti j=1\
    ispisi 1, j+1,j=2 ispisi 2,j+1,j=3 ispisi 3, vise uvjet nije ispunjen i tu staje, znaci vraca se na\
    staru for petlju*/
       printf("%d ",j);
   }
   printf("\n\n");
   }
    return 0;
}
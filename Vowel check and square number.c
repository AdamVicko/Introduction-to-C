#include<stdio.h>
#include<math.h>

void numpowmain( int *a)
    /*Squaring function with changing the number in the main,Pointer adr saving as pointer (*a)*/
    {
        *a=pow(*a,2); /* Dereference a*/
        printf("\nSquare of number is %d",*a); /*Printf the dereferenced a*/
    }
void numpow(int a) 
/* Squaring function without changing the number in the main*/
    {
        a=pow(a,2);
        printf("\n Square of number is %d",a);
    }
void checkletter (char letter,int *adr ) 
/*character a as (letter) and adres od number as pointer(adr)*/
    {
        if((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')||(letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
        {
            printf("Character is vowel!");
            numpow( *adr);    
            /*I call the value squaring function, I dereference adr (*adr) and hand it*/
        }
         else
        {
            printf("Character is consonant!");
            numpowmain( adr);
            /*I call the function and hand it the pointer adr*/
        }
    }
int main(void)
    {
        int number;
        char a;
        int *pnumber;
        pnumber=&number;
        printf("Enter number then character\n");
        scanf(" %d %c",&number,&a);
        
        checkletter( a, pnumber); /*I call the vowel check function, and give it the character (a) and the address of the number (pnumber = & number)*/
        
        printf("\nValue in main:%d",number); /*I print the number value to check it*/
        return 0;
    }

#include<stdio.h>
#include<math.h>
int OMEGA,planet,counter,month=0,monthleft,year=0;
int main()
{
    for(counter=1;;counter++)
    {
        if(counter%7!=0)
        {
            month++;
            if((counter>100)&&(counter%17==0))
            {
                year=month/12;
                monthleft=month%12;
                printf("Time to find OMEGA is %d years and %d months.",year,monthleft);
                break;
            }
        }
        else
            continue;
    }
    
    return 0;
}
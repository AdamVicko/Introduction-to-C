#include<stdio.h>
#include<math.h>
int planets=60,counter,resource,sumres=0;
int main()
{
    for(counter=1;counter<=planets;counter++)
    {
        if(counter%7==0)
        {
            continue;
        }
        if(counter%7!=0)
        {
            resource=counter*10;
            sumres+=resource;
        }
        
    }
    if(sumres>15000)
    printf("Number of resources collected is %d COONGRATULATIONS",sumres);
    else
    printf("Objective failed, resources gathered %d",sumres);
    return 0;
}
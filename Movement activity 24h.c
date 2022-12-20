#include<stdio.h>

int checkactivity(int a)
{
    if(a<=8)
    	printf("\nRegular activity %d hours.",a);
    if((a>8)&&(a<=12))
    	printf("\nIncreased activity %d hours.",a);
    else
    	printf("\nSuspicious activity %d hours.\n",a);
}

int main()
{
    int day[23];
    int i,*p;
    int sum=0;
    p=day;

    printf("Answer with: 1 (there was movement) or 0 (there was no movement)\nEach number represents one hour in day from 0 to 24\n");
    for(i=1;i<=24;i++,p++)
    {
        printf("Was there any movement in %d. hour: ",i);
        scanf("%d",p);
        if((*p==0)||(*p==1))
        {
            sum += *p;
        }
        else
        {
        int flag=0;
            while(flag==0)
            {
            	printf("ERROR!\nWas there any movement in %d. hour: ",i);
            	scanf("%d",p);
            if((*p==0)||(*p==1))
            {
            	sum += *p;
            	flag++;
            }
            else
            continue;
            }
            
        }
        
    }

    checkactivity(sum);

    return 0;
}

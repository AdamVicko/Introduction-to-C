#include<stdio.h>
int main()
{
int num[1000];
int flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0;
for(num[0]=0;*num<=1000;num[0]++)
{
    if(*num%3==0)
    {
        flag3++;
    }
    if(*num%4==0)
    {
        flag4++;
    }
    if(*num%5==0)
    {
        flag5++;
    }
    if(*num%6==0)
    {
        flag6++;
    }
    if(*num%7==0)
    {
        flag7++;
    }
    if(*num%8==0)
    {
        flag8++;
    }
    if(*num%9==0)
    {
        flag9++;
    }
}
printf ("Djeljivih s 3: %d\nDjeljivih s 4: %d\nDjeljivih s 5: %d\nDjeljivih s 6: %d\nDjeljivih s 7: %d\nDjeljivih s 8: %d\nDjeljivih s 9: %d\n",flag3,flag4,flag5,flag6,flag7,flag8,flag9);
    return 0;
}
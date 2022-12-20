#include<stdio.h>
int check(int *t)
{
    if( *t % 3 == 0)
    *t=*t+3;
}
int main()
{
    int i;
    int *j;
    j=&i;
    for(i=0;i<=100;i++)
    {
    check(j);
    printf("%d ",*j);
    }
    return 0;
}
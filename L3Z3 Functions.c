#include<stdio.h>
#include<math.h>

int suma(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
int sumb(int a,int b)
{
    int result;
    result=a+b;
    printf("b)=%d",result);
}
int sumc(int a,int b)
{
    int result=0,i=a+1;
    for(i;i<b;i++)
    {
        result+=i;
    }
    return result;
}
int flag=0,x,y,s,s1,s2;
int main()
{
    while(flag==0)
    {
    printf("Unesi dva cijela pozitivna broja za izracun: ");
    scanf("%d %d",&x,&y);
    if((x>0)&&(y>0))
    {
    s=suma(x,y);
    printf("a)=%d\n",s);
    s1=sumb(x,y);
    s2=sumc(x,y);
    printf("\nc)=%d",s2);
    flag++;
    }
    else
    continue;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,t,r,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=r+(rev*10);
        n=n/10;
        
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
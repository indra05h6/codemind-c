#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,rem,t;
    scanf("%d%d",&n,&r);
    t=n;
    while(t>0)
    {
        rem=t;
        while(t>0)
        {
            rem=t%10;
            c++;
            t=t/10;
        }
        int a=pow(10,r);
        int b=n%a;
        int d=pow(10,c-r);
        int e=n/d;
        int s=abs(b-e);
        printf("%d",s);
    }
    
}

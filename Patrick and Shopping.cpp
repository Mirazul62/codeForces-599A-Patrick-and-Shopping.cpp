#include<stdio.h>
int main()
{
    int a,b,c,count=0,sum1=0,sum2=0,sum=0;
    scanf("%d %d %d", &a, &b, &c);
    sum=2*a+2*b;
    sum1=2*a+2*c;
    sum2=2*b+2*c;
    count=a+b+c;
    if(sum<=sum1 && sum<=sum2 && sum<=count )
    {
        printf("%d", sum);
    }
    else if(sum1<=sum &&sum1<=sum2 && sum1<=count)
    {
        printf("%d", sum1);
    }
     else if(sum2<=sum &&sum2<=sum1 &&sum2<=count)
    {
        printf("%d", sum2);
    }
    else
    {
        printf("%d", count);
    }
}

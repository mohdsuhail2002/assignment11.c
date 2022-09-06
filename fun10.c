#include<stdio.h>
int sumseries(void);
int fac(int);
int main()
{ 
    int s;
    s=sumseries();
    printf("sum is %d",s);
    printf("\n");
    return 0;
    
}
int sumseries()
{ 
    int sum,a,b,c,d,e;
    a=fac(1);
    b=fac(2);
    c=fac(3);
    d=fac(4);
    e=fac(5);
    sum=a+(1+b)+(2+c)+(3+d)+(4+e)+5;
    return sum;
}
int fac(int n)
{
    int x;
    if(n==0)
    {
        return 1;
    }
    x=n*fac(n-1);
    return x;
}


#include<stdio.h>
int isprime(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    isprime(x);
    if(isprime(x)==1)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
    printf("\n");
    return 0;
}
    int isprime(int n)
    {
        int i,flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
            flag++;
            }
        }
        if(flag==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

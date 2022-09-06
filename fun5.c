
#include<stdio.h>
void firstprime(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    firstprime(x);
    printf("\n");
    return 0;
}
void firstprime(int n)
{
    int i,j;
    for(i=2;i<=n*2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d\t",i);
        }
        
    }
}


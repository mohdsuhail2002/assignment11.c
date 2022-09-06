#include<stdio.h>
void firstprime(int,int);
int main()
{
    int x,y;
    printf("enter the range");
    scanf("%d %d",&x,&y);
    firstprime(x,y);
    printf("\n");
    return 0;
}
void firstprime(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
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



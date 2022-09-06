#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    hcf(x,y);
    printf("hcf is %d",hcf(x,y));
    printf("\n");
    return 0;
}
int hcf(int n1,int n2)
{
    int min;
    min=(n1<n2)?n1:n2;
    while(1)
    {
    if(n1%min==0&&n2%min==0)
    {
        return min;
    }
    min--;
    }
}

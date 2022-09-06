#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    lcm(x,y);
    printf("lcm is %d",lcm(x,y));
    printf("\n");
    return 0;
}
int lcm(int n1,int n2)
{
    int max;
    max=(n1>n2)?n1:n2;
    while(1)
    {
    if(max%n1==0&&max%n2==0)
    {
        return max;
    }
    max++;
    }
}


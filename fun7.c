#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("enter a value");
    scanf("%d",&n);
    fibonacci(n);
    printf("\n");
    return 0;
}
void fibonacci(int num)
{
    int first=0,second=1,i,next;
    next=first+second;
    for(i=1;i<=num;i++)
    {
        first=second;
        second=next;
        next=first+second;
        printf("%d\t",next);
    }
}
#include<stdio.h>
int nextprime(int);
int main()
{ 
    int x;
    printf("enter a number");
    scanf("%d",&x);
    nextprime(x);
    printf("next prime number is %d",nextprime(x));
    printf("\n");
    return 0;
}
int nextprime(int n)
{
    int i,flag,j;
    for(i=n+1;i<100;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
    
    if(flag==0)
    {
        return i;
    }
}
}
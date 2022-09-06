#include<stdio.h>
#include<math.h>
int square(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    square(n);
    printf("square is %d",square(n));
    printf("\n");
    return 0;
}
int square(int x)
{
    return pow(x,2);
}
#include <stdio.h>

int main()
{
    int a, b, x, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("the value of (a*b)+(x*y) is %d", (a * b) + (x * y));
    return 0;
}
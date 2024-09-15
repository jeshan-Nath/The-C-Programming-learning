#include <stdio.h>

int main()
{
    int rank;
    printf("enter your rank: \n");
    scanf("%d", &rank);
    switch (rank)
    {
    case 1:
        printf("your salary is 2,50,000BDT");
        break;
    case 2:
        printf("your salary is 2,10,000BDT");
        break;

    case 3:
        printf("your salary is 1,50,000BDT");
        break;
    case 4:
        printf("your salary is 80,000BDT");
        break;
    case 5:
        printf("your salary is 50,000BDT");
        break;
    default:
        printf("invalid rank");
         break;
    }
    return 0;
}
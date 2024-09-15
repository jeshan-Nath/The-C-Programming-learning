#include <stdio.h>

int main(){
    int number;
    printf("Enter the integer number: ");
    scanf("%d", &number);
    if (number%3==0 && number%5==0)
    {
        printf("Yes the number the is devisible");
    }
    else{
        printf("No the number isn't  devisible");

    }
    return 0;
}
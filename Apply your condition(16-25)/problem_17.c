#include <stdio.h>

int main(){
    int number;
    printf("Enter your Math exam number: ");
    scanf("%d",&number);
    if (number>=80 && number<=100)
    {
        printf("You got A+");
    }
    else if (number>=70 && number<=79)
    {
        printf("You got A");
    }
    else if (number>=60 && number<=69)
    {
        printf("You got A-");
    }
    else if (number>=50 && number<=59)
    {
        printf("You got B");
    }
    else if (number>=40 && number<=49)
    {
        printf("You got C");
    }
    else if (number>=33 && number<=39)
    {
        printf("You got D");
    }
    else if (number>=0 && number<=32)
    {
        printf("You got F");
    }
    else{
    printf("Invalid Mark");
    }
    return 0;
}
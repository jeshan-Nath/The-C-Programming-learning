#include <stdio.h>

int main(){
    int lower,upper;
    printf("Enter the lowercase letter: ");
    scanf("%c",&lower);
    upper=lower-32;
    printf("The upper case letter is %c",upper);
    return 0;
}
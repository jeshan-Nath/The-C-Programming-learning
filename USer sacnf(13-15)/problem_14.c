#include <stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("Enter the celsius value: ");
    scanf("%f", &celsius);
    fahrenheit= celsius*(9.0/5.0)+32.0;
    printf("celsius to fahrenheit is %f",fahrenheit);
    return 0;
}
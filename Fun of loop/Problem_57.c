#include <stdio.h>

float c2f(float c);

float c2f(float c){
    return (c * (9.0 / 5.0)) + 32;
}

int main(){
    float celcius;
    printf("Enter the Celsius:\n");
    scanf("%f", &celcius);
    printf("The Celsius to Fahrenheit is: %.2f\n", c2f(celcius));
    return 0;
}

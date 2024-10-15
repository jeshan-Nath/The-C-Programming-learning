#include <stdio.h>

float force(float mass);
float force(float mass){
    return mass * 9.8;
}

int main(){
    float mass = 45;
    printf("The force of %f kg is %.2f Newtons", mass, force(mass));
    return 0;
}

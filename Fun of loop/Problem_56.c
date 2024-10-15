#include <stdio.h>

void average(int x, int y, int z) { // Changed return type to void
    printf("Average of three numbers is: %.2f\n", (x + y + z) / 3.0);
}

int main() {
    int a, b, c;
    printf("Enter three integer numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    average(a, b, c); // No need to return anything
    return 0;
}

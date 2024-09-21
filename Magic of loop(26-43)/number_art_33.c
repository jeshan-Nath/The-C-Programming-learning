// #include <stdio.h>

// int main(){
//     for (int i = 5; i >=1; i--)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    // for loop
    printf("for loop:\n");
    for (int i = 1; i <= 5; i++) {    // Initialization, condition, and increment all in one line
        printf("%d ", i);             // Outputs 1 2 3 4 5
    }
    printf("\n\n");

    // while loop
    printf("while loop:\n");
    int j = 1;                        // Initialization outside the loop
    while (j <= 5) {                  // Condition checked before each iteration
        printf("%d ", j);             // Outputs 1 2 3 4 5
        j++;                          // Increment inside the loop body
    }
    printf("\n\n");

    // do-while loop
    printf("do-while loop:\n");
    int k = 1;                        // Initialization outside the loop
    do {
        printf("%d ", k);             // Outputs 1 2 3 4 5
        k++;                          // Increment inside the loop body
    } while (k <= 5);                 // Condition checked after the loop body executes
    printf("\n");

    return 0;
}

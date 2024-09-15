// #include <stdio.h>

// int main() {
//     int month;
//     printf("Enter an integer number from (1-12): ");
//     scanf("%d", &month);
//     if (month == 1) {
//         printf("The month name is January");
//     } else if (month == 2) {
//         printf("The month name is February");
//     } else if (month == 3) {
//         printf("The month name is March");
//     } else if (month == 4) {
//         printf("The month name is April");
//     } else if (month == 5) {
//         printf("The month name is May");
//     } else if (month == 6) {
//         printf("The month name is June");
//     } else if (month == 7) {
//         printf("The month name is July");
//     } else if (month == 8) {
//         printf("The month name is August");
//     } else if (month == 9) {
//         printf("The month name is September");
//     } else if (month == 10) {
//         printf("The month name is October");
//     } else if (month == 11) {
//         printf("The month name is November");
//     } else if (month == 12) {
//         printf("The month name is December");
//     } else {
//         printf("The number is out of range (1-12)");
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int month;
    printf("Enter an integer number from (1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("the month is january");
        break;
    case 2:
        printf("the month is Fabruary");
        break;
    case 3:
        printf("the month is March");
        break;
    case 4:
        printf("the month is April");
        break;
    case 5:
        printf("the month is May");
        break;
    case 6:
        printf("the month is june");
        break;
    case 7:
        printf("the month is July");
        break;
    case 8:
        printf("the month is August");
        break;
    case 9:
        printf("the month is september");
        break;
    case 10:
        printf("the month is october");
        break;
    case 11:
        printf("the month is november");
        break;
    case 12:
        printf("the month is december");
        break;
    
    default:
    printf("Invalid month");
        break;
    }
    return 0;
}
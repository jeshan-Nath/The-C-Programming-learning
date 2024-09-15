#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>18)
    {
        printf("Yes you can eligable for creat bank account");
    }
    else{
        printf("NO you cann't eligable for creat bank account");
    }
    return 0;
}
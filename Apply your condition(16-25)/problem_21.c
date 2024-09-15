#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter Frist number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter three number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is maximum number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is maximum number",b);
    }
    else{
        printf("%d is maximum number",c);
    }
    return 0;
}
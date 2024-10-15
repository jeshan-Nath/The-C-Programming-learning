#include <stdio.h>
void evenodd(int n);
void evenodd(int n){
    if (n%2==0)
    {
        printf("It is an even number\n");
    }
    else{
        printf("It  is an odd number\n");
    }
    
}
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    evenodd(num);
    return 0;
}
#include <stdio.h>

int main(){
    int i,sum=0;
    for (int i = 101; i >=1 ; i--)
    {
       sum=sum+i; 
    }
    printf("summetion of the given series: %d",sum);
    return 0;
}
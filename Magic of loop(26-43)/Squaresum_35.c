#include <stdio.h>

int main(){
    int sum=0;
    for (int i = 5; i <=25; i++)
    {
        sum=sum+(i*i);
    }
    printf("thw summation of square of all number from 5 to 25 is %d",sum);
    return 0;
}
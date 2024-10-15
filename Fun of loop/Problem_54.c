#include <stdio.h>
int sum(int x, int y);
int sum(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter two integer number ");
    scanf("%d %d", &a,&b);
    printf("the sum of two integer is %d",sum(a,b));
    return 0;
}
#include <stdio.h>

int main(){
    int i=0;
    int j=0;
    j=i++ + ++i;
    printf("%d %d",i,j);
    return 0;
}
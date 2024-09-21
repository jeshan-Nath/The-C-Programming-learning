#include <stdio.h>

int main(){
    int i,j;
    for (int i = 4; i >= 1 ; i--) 
    {
        for (int j = 4; j >= i ; j--) 
        {
            printf("*");
        }
       printf("\n");  
    }
   
    return 0;
}
#include <stdio.h>

int main(){
    for (int i = 100; i <= 200; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d is divisible by booth 3 and 5\n",i);
        }
        
    }
    
    return 0;
}
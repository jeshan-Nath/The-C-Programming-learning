#include <stdio.h>

int main(){
    int x,y;
    printf("enter x cordinate : \n");
    scanf("%d",&x);
    printf("enter y cordinate : \n");
    scanf("%d",&y);
   /* First Quadrant: x > 0 and y > 0
    Second Quadrant: x < 0 and y > 0
    Third Quadrant: x < 0 and y < 0
    Fourth Quadrant: x > 0 and y < 0 */

    if (x>0 && y>0)
    {
        printf("frist quadrant");
    }
    else if (x<0 && y>0)
    {
        printf("second quadrant");
    }
    else if (x<0 && y<0)
    {
        printf("third quadrant");
    }
    else if (x>0 && y<0){
        printf("forth  quadrant");

    }

    return 0;
}
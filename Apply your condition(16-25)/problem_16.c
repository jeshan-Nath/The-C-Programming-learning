// if you got GPA 5 in the SSC exam, you can apply for the college. Take GPA as input and print "YES" if you can apply, otherwise print "NO"
#include <stdio.h>

int main(){
    int GPA;
    printf("Enter your GPA: ");
    scanf("%d",&GPA);
    if (GPA==5)
    {
        printf("Yes\n");
    }
    else 
    printf("no\n");
    return 0;
}
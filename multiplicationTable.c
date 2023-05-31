#include <stdio.h>


int main(){
    int userInpt;
    printf("Enter a number: ");
    scanf("%d", &userInpt);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", userInpt, i+1, userInpt*(i+1));
    }
}

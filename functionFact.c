#include <stdio.h>

int factorial(int entNum){
    int factNum; 
    factNum = entNum-1;
    while (factNum != 0)
    {   
        entNum*=factNum;
        factNum--;
    }
    return entNum;
}

int main(){
    int userInpt;
    printf("Enter a number: ");
    scanf("%d", &userInpt);
    printf("The factorial of %d is %d", userInpt, factorial(userInpt));
}
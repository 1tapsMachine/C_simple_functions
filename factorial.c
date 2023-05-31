#include <stdio.h>

int main(){
    int entNum,factNum; 
    printf("Enter a number: ");
    scanf("%d", &entNum);
    factNum = entNum-1;
    while (factNum != 0)
    {   
        entNum*=factNum;
        factNum--;
    }
    printf("factorial is %d", entNum);
}
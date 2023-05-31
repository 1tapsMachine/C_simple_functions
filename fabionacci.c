#include <stdio.h>


int main()
{
    int prevNum,thisNum,nextNum,userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    prevNum=0;
    thisNum=1;
    nextNum=1;
    while (thisNum < userInput)
    {
        printf("%d, ", prevNum);
        nextNum = prevNum + thisNum;
        prevNum = thisNum;
        thisNum = nextNum;
    }
}






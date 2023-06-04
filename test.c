#include <stdio.h>



int main(){
    int numbers={0,1,4,5,8,7};
    int *pNum=&numbers;
    printf("%d",pNum);
}
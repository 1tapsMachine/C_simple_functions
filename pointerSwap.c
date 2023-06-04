#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    if (a!=b){
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

int main(){
    int a,b;
    printf("Insert a value for a: ");
    scanf("%d", &a);
    printf("Insert a value for b: ");   
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

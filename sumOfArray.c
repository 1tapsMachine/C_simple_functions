#include <stdio.h>
#include <string.h>

int sum(int array[],int arraySize){
    int sum = 0;
    for (int i=0;i<arraySize;i++){
        sum += array[i];
    }
    return sum;
}


int main(){
    int size = 0;
    printf("How many elements do you want to have in your array? ");
    scanf("%d", &size);
    int array[size];
    for (int i=0;i<size;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("Sum of array's elements is %d", sum(array,size));
    return 0;
}
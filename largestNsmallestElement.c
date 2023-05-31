#include <stdio.h>
#include <stdlib.h>

int getMin(int list[],int sizeOfArray){
    int min = list[0];
    for(size_t i = 1; i < sizeOfArray; i++){
        if(list[i] < min){
            min = list[i];
        }
    }
    return min;
}
int getMax(int list[],int sizeOfArray){
    int max = list[0];
    for(size_t i = 1; i < sizeOfArray; i++){
        if(list[i] > max){
            max = list[i];
        }
    }
    return max;
}


int main(){
    int sizeOfArray;
    printf("Enter size of list: ");
    scanf("%d", &sizeOfArray);
    int list[sizeOfArray];
    for(size_t i = 0; i < sizeOfArray; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("Min: %d\n", getMin(list, sizeOfArray));
    printf("Max: %d\n", getMax(list, sizeOfArray));
}
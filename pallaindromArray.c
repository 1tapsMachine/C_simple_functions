#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // for bool type

bool isPallindrom(int list[], int sizeOfArray){ // returns true if pallindrom
    int i,j;
    for (i = 0, j = sizeOfArray - 1; i < j; i++, j--){
        if(list[i] != list[j]){
            return false;
        }
    }
    return true;
}

int main(){ // main function
    int sizeOfArray;
    printf("Enter size of list: ");
    scanf("%d", &sizeOfArray);
    int *list= (int *)malloc(sizeOfArray * sizeof(int)); // dynamic memory allocation
    if (list == NULL){ // if memory allocation fails
        printf("Memory allocation failed");
        return 1; // exit program
    }
    for(size_t i = 0; i < sizeOfArray; i++){ 
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    if(isPallindrom(list, sizeOfArray)){
        printf("Pallindrom");
    }else{
        printf("Not pallindrom");
    }

    free(list); // free memory
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int *makeArray(int size){
    int *array = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    return array;
}
int printArray(int *array,int size){
    printf("Array => [");
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
        if (i!=size-1)
        {
            printf(",");
        }
    }
    printf("]");
    printf("\n");
}
int main(){
    int arraySize,choice;
    int *array=NULL;
    choice=1;
    while (choice!=0){
        printf("1. Make Array\n2. Print Array\n0. Exit\n");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("Enter array size: ");
            scanf("%d",&arraySize);
            array=makeArray(arraySize);
        }
        else if (choice==2)
        {
            printArray(array,arraySize);
        }
        else if (choice==0)
        {
            break;
            free(array);
        }
        
    }
}
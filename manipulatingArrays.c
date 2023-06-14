#include <stdio.h>
#include <stdlib.h>
void printArray(int array[], int size){
    int *pArr;
    pArr = &array[0];
    printf("--------------------\n[");
    for(pArr;pArr<&array[size];pArr++){
        if(pArr<&array[size-1]){
            printf("%d",*pArr);
            printf(",");
        }
        else{
            printf("%d]\n",*pArr);
        }
    }
    printf("--------------------\n");
}
void modifyElement(int *array, int size, int index){
    printf("--------------------\n");
    int *pArr=&array[0];
    for(pArr;pArr<&array[size-1];pArr++){
        if (pArr==&array[index]){
            int newElement;
            printf("Enter new element: ");
            scanf("%d",&newElement);
            *pArr=newElement;
        }
        else if (pArr==NULL){
            printf("Invalid index\n");
        }
    }
    printf("--------------------\n");
}
void deleteElement(int *array, int size, int index){
    printf("--------------------\n");
    array[index]=NULL;
    for (int i=index;i<size;i++){
        array[i]=array[i+1];
    }
    printf("Element deleted\n");
    printf("--------------------\n");
}
int main(){
    int array[5]={1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int choice=1;
    while (choice!=0)
    {
        printf("Enter your choice: \n1. Print array\n2. Modify element\n3. Delete element\n4. Swap element\n5. Calculate array sum array\n0. Exit\n");
        scanf("%d",&choice);
        if (choice==1)
        {
            printArray(array,size);
        }
        else if (choice==2){
            printf("Enter index: ");
            int index;
            scanf("%d",&index);
            if (index>=0 && index<size){
                modifyElement(array,size,index);
            }
            else{
                printf("--------------------\n");
                printf("Invalid index\n");
                printf("--------------------\n");
            }    
        }
        else if (choice==3){
            int index;;
            printf("Enter index: ");
            scanf("%d",&index);
            deleteElement(array,size,index);
            size--;
        }
        else if (choice==4){
            
        }
        else if (choice==5){

        }
        else if (choice==0){
            printf("Exiting...\n");
            exit(0);
        }
        else{
            printf("Invalid choice\n");
        }
        
    }
    
}
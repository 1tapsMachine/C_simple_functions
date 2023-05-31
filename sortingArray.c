#include <stdio.h>

int *sort(int list[]){
    int i, j, temp;
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(list[i] > list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    return list;
}


int main(){
    int list[] = {1, 3, 2, 4, 5};
    int *sortedList = sort(list);
    for(size_t i = 0; i < 5; i++){
        printf("%d ", sortedList[i]);
    }
}
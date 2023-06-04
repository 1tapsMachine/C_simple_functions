#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseString(char *str){
    char  *pStart = str;
    char *pEnd = str + strlen(str) - 1;
    while(pStart<pEnd){
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }

}


int main(){
    int maxLen = 50;
    char *str = (char *)malloc(maxLen * sizeof(char));
    int choice;
    choice = 1;
    while(choice != 0){
        printf("Enter 1 to type a string\nEnter 2 to display\nEnter 3 to reverse the string\nEnter 0 to exit\nEnter you're choice : ");
        scanf("%d", &choice);
        if(choice == 1){
            printf("\n");
            printf("Enter a string : ");
            scanf("%s", str);
            printf("\n");
        }
        else if (choice == 2){
            printf("\n");
            printf("The string is : %s\n", str);
            printf("\n");
        }
        else if(choice == 3){
            reverseString(str); 
        }
        else if(choice == 0){
            break;
        }
        else{
            printf("Invalid choice\n");
        }

    }
    free(str);
    return 0;
}
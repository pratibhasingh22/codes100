#include <stdlib.h>  
#include <stdio.h>  

int main() {  
    int num;  

    printf("Enter the number of elements: ");  
    scanf("%d", &num);  

    int *arr = (int *)malloc(num * sizeof(int));  

    printf("Enter the elements: ");  
    for(int i = 0; i < num; i++) {  
        scanf("%d", &arr[i]);  
    }  

    for(int i = 0; i < num; i++) {  
        int flag = 0;  
        for(int j = 0; j < i; j++) {  
            if(arr[i] == arr[j]) {  
                flag = 1;  
                break;  
            }  
        }  
        if(flag)  
            continue;  

        int count = 1;  
        for(int j = i + 1; j < num; j++) {  
            if(arr[i] == arr[j]) {  
                count++;  
            }  
        }  

        printf("The element %d is seen %d times\n", arr[i], count);  
    }  

    free(arr);  
    return 0;  
}  
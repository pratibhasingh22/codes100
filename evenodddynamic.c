#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("enter the  no of elements");
    scanf("%d",&num);
    int *arr;
    arr=(int*)malloc(num*sizeof(int));

    printf("enter the elements");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    int *even_ele=(int *)malloc(even *sizeof(int));
    int *odd_ele=(int *)malloc(odd *sizeof(int));
    
    int e=0,o=0;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even_ele[e++]=arr[i];
        }
        else{
            odd_ele[o++]=arr[i];

        }
    }
    printf("printing the even elements array");
    for(int i=0;i<even;i++){
        printf("%d ",even_ele[i]);
    }
    
    printf("\nprinting the odd elements");
    for(int i=0;i<odd;i++){
        printf("%d ",odd_ele[i]);

    }
    free(arr);
    free(even_ele);
    free(odd_ele);
    return 0;

}
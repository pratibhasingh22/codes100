#include<stdlib.h>
#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num;
    printf("enetr the no of element sto be stored");
    scanf("%d",&num);
    int *arr;
    arr=(int *)malloc(num*sizeof(int));
    printf("enter the numbers\n");
    for(int i=0;i<num;i++){ 
       scanf("%d",&arr[i]);

    }  
    int i=0;
    int j=num-1;
    while(i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    printf("reversed array\n");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);

    }
    free(arr);
    return 0;
}
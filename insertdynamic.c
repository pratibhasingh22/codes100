#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,position,element;

    printf("enter the number of elements");
    scanf("%d",&num);

    int *arr;
    arr=(int *)malloc((num+1)*sizeof(int));
    
    printf("enter the elements");
    for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the element to be inserted");
    scanf("%d",&element);

    printf("enter the positon");
    scanf("%d",&position);

    for(int i=num;i>=position;i--){
        arr[i]=arr[i-1];

    }
    arr[position -1]=element;
    num++;
    printf("new array");
    for(int i=0;i<num;i++){
      printf("%d ",arr[i]);
    }
    free(arr);
    return 0;

}

#include<stdio.h>
int  main(){
    int n;

    int arr[100];
    printf("enter the no of elemnts u want ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int pos,element;
    printf("enter the position and element to be entered");
    scanf("%d %d",&pos,&element);

    for(int i=n; i>=pos; i--){
        arr[i]=arr[i - 1];
    }

    arr[pos - 1]= element;

    for(int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
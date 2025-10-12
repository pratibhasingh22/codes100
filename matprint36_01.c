#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50];
    printf("enter the no of rows and columns");
    scanf("%d %d",&a,&b);

    printf("enter the elements of the matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat[i][j]);

     
        }
    }
    printf("the matrix is\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%4d",mat[i][j]);

     
        }
        printf("\n");
    }
    return 0;
}

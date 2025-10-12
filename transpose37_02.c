#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50],transpose[50][50];
    printf("enter the no of rows and column");
    scanf("%d %d",&a,&b);
    printf("enter the elements of the matrix\n");
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            transpose[j][i]=mat[i][j];
        }
    }
    printf("the transpose of the matrix is\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%2d",transpose[i][j]);
        }
    printf("\n");
    }
    return 0;
}

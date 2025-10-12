#include<stdio.h>
int main(){
    int a,b;
    int mat1[50][50],mat2[50][50],sum[50][50];
    printf("enter the no of rows and column");
    scanf("%d %d",&a,&b);
    printf("enter the elements of the matrix1\n");
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    int c,d;
    printf("enter the no of rows and column");
    scanf("%d %d",&c,&d);
    if(a!=c || b!=d){
        printf("addition not possible!");
        return 0;
    }
    printf("enter the elements of the matrix2\n");
    
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
     
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("the sum of the matrices is\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}    
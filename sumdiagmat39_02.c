#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50];
    int  sum=0;
    printf("enter the number of rows and column");
    scanf("%d %d",&a,&b);

    if(a!=b){//should be syymetric
        printf("not symmetric");
        return 0;
    }
    printf("enter the elements of the matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<a;i++){
        sum+=mat[i][i];
    }
    printf("sum of the main diagonal elements=%d\n",sum);
    return 0;
}    
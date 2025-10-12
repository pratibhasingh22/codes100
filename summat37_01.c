#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50];
    printf("enter the no of rows and columns");
    scanf("%d %d",&a,&b);

    printf("enter the elements of the matrix\n");
    for(int i=0;i<a;i++){
        int sum=0;
        for(int j=0;j<b;j++){
            scanf("%d",&mat[i][j]);
            sum+=mat[i][j];
            //printf("the sum of the elements of one row of the matrix=%d\n",sum);
     
        }
        printf("the sum of the elements of row %d of the matrix=%d\n",i+1,sum);
    }
    //printf("the sum of the elements of the array=%d\n",sum);
    return 0;
}

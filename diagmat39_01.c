#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50];
    int  distinct=1;
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
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(mat[i][i]==mat[j][j]){
                distinct=0;
                break;
            }
        }
    }    
    if(distinct)
        printf("all distinct\n");
    else
        printf("something dupliacte\n");

    return 0;
}        

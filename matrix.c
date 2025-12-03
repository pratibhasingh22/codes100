#include<stdio.h>
int main(){
    int n,m,i,j;

    printf("enter the no of rows and columns:");
    scanf("%d %d",&n,&m);
    int mat[n][m],trans[m][n];
    printf("enter the elements of the matrix");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    /*for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            trans[j][i]=mat[i][j];
        }
    }*/
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                printf("%d ",mat[i][j]);
            }
            else 
              continue;
        
        }
    }
}
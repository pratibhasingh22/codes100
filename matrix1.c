#include<stdio.h>
void inputmat(int n,int m,int mat[n][m]){
    
    printf("entert the elements fo the matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
void dia(int n,int m,int mat[n][m]){
    for(int i=0;i<n;i++){
        int j=n-1-i;
        printf("%d ",mat[i][j]);
    }
}
int sumdiag(int n,int m,int mat[n][m]){
    int sum=0;
    for(int i=0;i<n;i++){
        int j=n-1-i;
        sum+=mat[i][j];

        
    }
    return sum;

}
int main(){
    int n, m;
    printf("enter the no of rows and columns:");
    scanf("%d %d",&n,&m);
    int mat[n][m];

    inputmat(n,m,mat);
    dia(n,m,mat);
    int s;
    s=sumdiag(n,m,mat);
    printf("sum of the diagonal elements=%d\n",s);
    
    return 0;


}
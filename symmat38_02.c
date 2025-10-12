#include<stdio.h>
int main(){
    int a,b;
    int mat[50][50];
    int  issymmetric=1;
    printf("enter the number of rows and column");
    scanf("%d %d",&a,&b);

    if(a!=b){//symmetric must be square
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
        for(int j=0;j<b;j++){
            if(mat[i][j]!=mat[j][i]){
                issymmetric=0;
                break;
            }
        }
        if(issymmetric ==0)
            break;
    }
    if(issymmetric)
       printf("truely syymertic\n");
    else{
        printf("falsely symmetric\n");
    }  
    return 0; 
}
#include<stdio.h>
void inputmat(int n,int m,int mat[n][m]){
    printf("enter the elememnts of matrix\n"); //n is for total rows and m is for total columns of the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);

        }
    }
}
void printrow(int n,int m,int mat[n][m],int row){
    int sum=0;
    printf("the row %d elements of the matrix are\n",row);  
    for(int j=0;j<m;j++){
        printf("%d ",mat[row][j]);                  
        sum+=mat[row][j];

    }
    printf("\nsum of the elements of %d row=%d",row,sum);



}
void dia(int n,int m,int mat[n][m]){
    int sum=0;
    printf("the elements of the seconadary digonal matrix\n");
    for(int i=0;i<n;i++){
        int j=n-1-i;
        printf("%d ",mat[i][j]);
        sum+=mat[i][j];
    }
    printf("\nthe sum of the elements is %d\n",sum);
}
void maindiag(int n,int m,int mat[n][m])  {
    int sum=0;
    printf("the elements of the main diagonal");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                printf("%d ",mat[i][j]);
                sum+=mat[i][j];
            }
            
        
        }
    }
    printf("\nthe sum of the elements is %d\n",sum);
}          
void printcol(int n,int m,int mat[n][m],int col){
    int sum=0;
    printf("the column %d elements of the matrix are\n",col);
    for(int i=0;i<m;i++){
        printf("%d ",mat[i][col]);
        sum+=mat[i][col];

    }
    printf("\nthe sum of the elements of %d column=%d",col,sum);
}
int main(){
    int m,n;
    printf("enter the no of rows and columns in the matrix");
    scanf("%d %d",&m,&n);

    int  mat[n][m];
    if(n==m){

    inputmat(n,m,mat);
    }

    int choice,ch;
    do{
    printf("1.row and sum\n");
    printf("2.column and sum\n");
    printf("3.seconadry diagonal and sum\n");
    printf("4.main diagonal and sum\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:{
            int row;
            printf("enter the row whose elements and sum you want to see %d:",n-1);
            scanf("%d",&row);
            if(row >=0 && row < n)
               printrow(n,m,mat,row);
            else 
               printf("invalid row no");
            break;      

        }
        case 2:{
            int col;
            printf("enter the column whose element and sum u want\n");
            scanf("%d",&col);
            if(col>=0 && col<m)
              printcol(n,m,mat,col);
            else
              printf("invalid column no");
            break;    
        }
        case 3:{
            
            dia(n,m,mat);
            break;

        }
        case 4:{
            
            maindiag( n, m,mat);
            break;

        }    
       
        
        default:
          printf("invalid choice\n");


    }
    printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
    scanf("%d",&ch);

    } while(ch == 1);

    return 0;
}
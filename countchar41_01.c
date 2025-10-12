#include<stdio.h>
int chars(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){ 
        if(str[i]!='\n'){
           count ++;
        }     
    }
    return count;
}
int main(){
    char str[50];
    int totalnoofchar;
    printf("enter a string");
//  fgets(str,sizeof(str),stdin);
    scanf("%s",str);

    totalnoofchar=chars(str);
    printf("number of characters=%d\n",totalnoofchar);
    return 0;
}
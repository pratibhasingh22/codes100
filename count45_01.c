#include<stdio.h>
int count(char *str,char ch){
    int count =0;
    while(*str !='\0'){
        if(*str == ch){
            count ++;

        }
        str++;

    }
    return count;
}
int main(){
    char str[100];
    char ch;
    printf("enter the string");
    scanf("%s",str);
    printf("enter the char to count");
    scanf(" %c",&ch);
    
    int countf =count(str,ch);
    printf("%d", countf);
}
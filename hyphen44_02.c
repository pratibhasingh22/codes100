#include<stdio.h>
#include<string.h>
void hyphens(char *str){
    while(*str != '\0'){
        if(*str == ' '){
            *str = '-';

        }
        str ++ ;
    }
}
int main(){
    char str[100];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    hyphens(str);
    printf("string after replacing spaces with hyphens %s\n",str);
    return 0;
}
#include<stdio.h>
#include<ctype.h>
void initials(char *name){
    if (*name != ' ' && *name !='\0'){
        printf("%c.",toupper(*name));
    }
    while(*name != '\0'){
        if(*name == ' ' && *(name+1) != ' ' && *(name+1) != '\0'){
            printf("%c.",toupper(*(name+1)));
        
        }
        name++ ;
    }
}
int main(){
    char name[100];
    printf("enter the string");
    fgets(name,sizeof(name),stdin);
    initials(name);
    return 0;
}

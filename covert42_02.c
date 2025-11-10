#include<stdio.h>
void uppercase(char str[]){

    for (int i=0;str[i]!='\0';i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;

        }
    }
}
int main(){
    char str[80];
    printf("enter a string");
    fgets(str, sizeof(str), stdin);
    uppercase(str);
    printf("%s",str);
    return 0;
}    
#include<stdio.h>
#include<string.h>
void substring(char *str){
    int n=strlen(str);
    for(int start=0;start<n;start ++){
        for (int end=start;end<n;end ++){
            for(int i=start;i<=end;i++){
                printf("%c",*(str+i));

            }
            if(!(start == n-1 && end == n-1))
               printf(",");
        }
    }
}
int main(){
    char str[100];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    substring(str);
    return 0;
}    
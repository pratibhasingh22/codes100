#include<stdio.h>
int main(){
    char str[50];
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] !='\0'){
        if(str[i] !='\n')
           printf("%c\n",str[i]);
        i++;   
    }
    return 0;
}
/*#include <stdio.h>

void printChars(char str[], int index) {
    if (str[index] == '\0')  // base case: end of string
        return;
    
    if (str[index] != '\n')  // ignore newline character
        printf("%c\n", str[index]);
    
    printChars(str, index + 1);  // recursive call for next character
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printChars(str, 0);  // start from index 0

    return 0;
}
*/
//using functions
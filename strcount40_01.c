#include<stdio.h>
int main(){
    char str[100];
    int count=0;

    printf("enter a string");
    scanf("%s",str);
    
    while(str[count]!='\0'){
        count++;

    }
    printf("number of characters=%d\n",count);
    return 0;
}
/*char str[100];
int count = 0;

printf("Enter a string: ");
fgets(str, sizeof(str), stdin); // reads the whole line including spaces

while(str[count] != '\0') {
    count++;
}

// remove the trailing newline
if(str[count-1] == '\n') {
    count--;
}

printf("Number of characters = %d\n", count);
*/
//to count the whole including spaces
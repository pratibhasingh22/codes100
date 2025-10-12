#include<stdio.h>

int vowels(char str[]);
int consonants(char str[]);
int vowels(char str[]){
    int i,count_vowels=0,count_consonants=0;
    for(i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            count_vowels++;
        else
            count_consonants++;
    }
    return count_vowels;

}

#include <stdio.h>
#include <ctype.h>   // for tolower()

void countVowelsConsonants(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsConsonants(str);   // function call
    return 0;
}

/*void countVowelsConsonants(char str[]) {
    int i, vowels = 0, consonants = 0;
    char ch;

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);  // convert to lowercase
        if (ch >= 'a' && ch <= 'z') {   // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
}
*/
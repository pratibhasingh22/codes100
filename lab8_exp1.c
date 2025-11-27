#include<stdio.h>
int main(){
    int x=78;
    float y=455.6;
    char z= 'a';
    int *ptr1=&x;
    float *ptr2=&y;
    char *ptr3=&z;
    printf("value of a is %d and the pointer of a is %d\n",*ptr1,ptr1);
    
    printf("value of b is %f and the pointer of b is %d\n",*ptr2,ptr2);
    
    printf("value of c is %c and the pointer of c is %d",*ptr3,ptr3);
    return 0;

}
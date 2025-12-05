#include<stdio.h>
struct complex{
    float real_part;
    float imag_part;

};
struct complex reading_complex(){
    struct complex com;
    printf("enter the real part of the complex no\n");
    scanf("%f",&com.real_part);
    printf("enter the imaginary part of the complex no\n");
    scanf("%f",&com.imag_part);
    return com;
}
void print_complex(struct complex c){
    printf("%2.f + %2.fi\n",c.real_part,c.imag_part);
}
struct complex adding_comp(struct complex c1,struct complex c2){
    struct complex add_com;
    add_com.real_part=c1.real_part+c2.real_part;
    add_com.imag_part=c1.imag_part+c2.imag_part;
    return add_com;
}
struct complex subtract_comp(struct complex c1,struct complex c2){
    struct complex sub_com;
    sub_com.real_part=c1.real_part-c2.real_part;
    sub_com.imag_part=c1.imag_part-c2.imag_part;
    return sub_com;
}
int main(){
    struct complex complex_no1,complex_no2,sum,diff;

    printf("enter the first complex no\n");
    complex_no1=reading_complex();

    printf("enter the second complex no\n");
    complex_no2=reading_complex();

    sum = adding_comp(complex_no1,complex_no2);
    diff=subtract_comp(complex_no1,complex_no2);

    printf("first complex no");
    print_complex(complex_no1);

    printf("second complex no");
    print_complex(complex_no2);

    printf("the sum of the complex no's");
    print_complex(sum);

    printf("the diff of the complex no's");
    print_complex(diff);

    
    return 0;

}
#include<stdio.h>


int main(){

enum data{

LOW=1,MEDIUM=3,HIGH
};


int city=MEDIUM;

    switch (city){

        case 1:
        printf("ahmedabad");
        break;

        case 2:
        printf("surat");
        break;

        case 3:
        printf("mehsana");
        break;

        case 4:
        printf("gandhinagar");
        break;
   
    default:
    printf("wrong");


}
}
#include<stdio.h>
#include<string.h>
struct mobile{

char name[30];
int price;
float rating;
char grade;
};


int main(){

struct mobile oneplus;


// oneplus.name="Oneplus Nord";
strcpy(oneplus.name,"Oneplus Nord");
oneplus.price=30000;
oneplus.rating=8.8;
oneplus.grade='A';


printf("%s",oneplus.name);
printf("\n%d",oneplus.price);
printf("\n%f",oneplus.rating);
printf("\n%c" , oneplus.grade);


struct mobile oppo;


strcpy(oppo.name,"Oppo reno");
oppo.price=27000;
oppo.rating=9.9;

printf("\n\n%s" ,oppo.name);
printf("\n%d" ,oppo.price);
printf("\n%f" ,oppo.rating);

struct mobile samsung;

strcpy(samsung.name,"samsung note 12");
samsung.price=90000;
samsung.rating=9.9;

printf("\n\n%s" , samsung.name);
printf("\n%d" , samsung.price);
printf("\n%f" , samsung.rating);

struct mobile iphone;

strcpy(iphone.name,"iphone 13 pro max");
iphone.price=100000;
iphone.rating=10;

printf("\n\n%s" , iphone.name);
printf("\n%d" , iphone.price);
printf("\n%f" , iphone.rating);






}
#include<stdio.h>

int main(){
//-----------------------break loop---------------------------------------
int a;
for (a=1; a<=10; ++a){

    if(a==4){
        break;
    }
    printf("%d" , a);
}
//----------------continue loop-----------------------------------------
   
int b;
for (b=1; b<=10; ++b){

    if(b==4){
        continue;
    }
    printf("%d" , b);
}
//------------memory address-------------------------------------------
int c=50;

printf("\n%p",c);

//-------------------pointers and arrays--------------------------------

int d;
int num[4]= {20,30,40,50};

for (d=0; d<=4; ++d){
    printf("%p\n" , num[d]);
}

}
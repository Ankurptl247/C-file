#include<stdio.h>

// int data(int a,int b){
//    return a+b;
// }
// int wide(char b){
//     return b;
// }
// int menu(float c){
//     printf("\n%f" , c);
// }
// int book(char d[1]){
//     printf("\n%s" , d);
// }

// int main(){

//     printf("%d",data(50,100));
//     printf("\n%c",wide('a'));
//     menu(24.5);
//     book("hello world");

    
//-----------------------------------------------------------------------


// int sum(int a, int b){
//     return a+b;
// }
// int minus(int c, int d){
//     return c-d;
// }
// float divide(int e, int f){
//     return e/f;
// }
// int multiply(int g, int h){
//     return g*h;
// }

// int main () {

//     printf("%d" , sum(50,100));
//     printf("\n%d" , minus(120,20));
//     printf("\n%f" , divide(20,120));
//     printf("\n%d" , multiply(20,120));

// }
//---------------------------------------------------------------------

// int sum(int a, float b,char c,char d[]){
//     printf("%d" , a);
//     printf("%f" , b);
//     printf("%c" , c);//
//     printf("%s" , d);
    
// }
    

// int main (){

//  sum(50,5.5,'a',"hello world");

//-----------------------------------------------function------------------------------

    void text(int a, char name[], float percentage, char grade){

        printf("\n\nStudent roll no is : %d" , a);
        printf("\nStudent name is:%s" , name);
        printf("\nStudent percentage is :%f" , percentage);
        printf("\nStudent grade is : %c\n" , grade);

        if(percentage>50){
            printf("Paas\n");
        }
        else{
            printf("fail\n");
        }
}

int main (){
    int a;
    char name[10];
    float p;
    char g;

    int x;
    for(x=1; x<=2; ++x){
       // scanf("\n%d %s %f %c" , &a,&name,&p,&g);
    //text(a,name,p,g);
    }
    
    
    text(26,"ankur patel", 96.7, '\0');
    text(56,"Meet patel", 93.7, 'a');
 
}
    





 

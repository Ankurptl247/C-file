#include<stdio.h>
int main(){

    FILE * name;

    //war
    
    name=fopen("data.txt" , "r");

    fprintf(name, "hey i am harry"); 
    fprintf(name ,"\nhello world"); 

   fprintf(name, "hey i am groot");

//read data inside the file : tag = "r"
    char a[10];
    fgets(a, 10, name);
    printf("%s",a);

}


   





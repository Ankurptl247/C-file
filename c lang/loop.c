#include<stdio.h>

int main(){

    int a,b;

    for(a=1; a<=4; ++a){

        for(b=4; b>=1; --b)
        
            if(b<=a){
                printf("%d" , b);
            }
            else{
                printf(" ");
            }
        printf("\n");
    }
}

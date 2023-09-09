#include <stdio.h>
int main(){
    int a;
    int b;

    printf("Enter no :");
    scanf("%d" , &b);

    for (a=1; a<=10; ++a){
        printf("%d * %d = %d\n" ,b,a,a*b);
    }
}

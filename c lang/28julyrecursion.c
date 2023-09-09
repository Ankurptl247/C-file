#include<stdio.h>
#include<math.h>

int name(int a);

int main(){
    int b;
    printf("Enter no:");
    scanf("%d" , &b);
    int mark = name(b);
    printf("%d" , mark);
    return 0;
}
int name(int a){
    if (a>0){
       return a + name(a-1);
    }else{
        return 0;
    }
}

//--------------------------maths function------------------------------
// int main() {
//     printf("%f" ,sqrt(16));   //sqrt mean square root
//     printf("\n%f" , ceil(1.5)); //nearest upwards value
//     printf("\n%f" , floor(1.5));  //nearest downwards value
//     printf("\n%f" , pow(4,4)); //value of x to the power of y (x^y)
//     return 0;
// }








